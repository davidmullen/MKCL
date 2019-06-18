;;;;  -*- Mode: Lisp; Syntax: Common-Lisp; Package: SYSTEM -*-
;;;;
;;;;  Copyright (c) 2010-2013, Jean-Claude Beaudoin.
;;;;
;;;;  This program is free software; you can redistribute it and/or
;;;;  modify it under the terms of the GNU Lesser General Public
;;;;  License as published by the Free Software Foundation; either
;;;;  version 3 of the License, or (at your option) any later version.
;;;;
;;;;  See file '../Copyright' for full details.

;;;
;;;
(push :mkcl-bootstrap *features*)

;;(load "cmp/CMP.fasb")
(load "cmp/load.lsp" :external-format '(:ascii :lf))

;;(proclaim '(optimize (debug 1))) ;; faster, no debug info.
(proclaim '(optimize (debug 0))) ;; faster, no debug info.
#-(and)
(progn
  (setq compiler::*compiler-break-enable* t) ;; enter debugger on compiler internal error
  (setq compiler::*delete-compiler-internal-files* nil)
  (setq *compile-extra-options* '(:c-file t :data-file t :h-file t))
  (proclaim '(optimize (debug 3) (speed 1))) ;; full debug info
  ;;(proclaim '(optimize (debug 3) (speed 1) (compilation-speed 3)))
  ;;(proclaim '(optimize (debug 0) (speed 3) (compilation-speed 3)))
  ;;(proclaim '(optimize (safety 3))) ;; full safety checks
  (setq compiler::*trace-cc* t)
  )

;;; -H traces include files in gcc.
;;(setq compiler::*cc-flags* (concatenate 'base-string "-H " compiler::*cc-flags*))



(setq compiler::*mkcl-include-directory* (truename (pathname "./c")) ;; truename is needed by MS-Windows
      compiler::*mkcl-library-directory* (truename (pathname "."))
      )

#+unix
(unless (compiler::build-program
	 "mkcl"
	 :lisp-object-files '( "cmp/CMP.a" ) ;; list of pre-loads.
	 :use-mkcl-shared-libraries nil ;; force static linking
	 ;;:extra-ld-flags "-pg"  ;; for profiling
	 )
  (mkcl:quit :exit-code 1))


#+windows
(unless (compiler::build-program
	 "mkcl"
	 :lisp-object-files '( "cmp/CMP.a" ) ;; list of pre-loads.
;;	 :extra-ld-flags "-Wl,--stack,0x800000" ;; Stack of 8MB. ;; behaves badly on MinGW64. 
#|
	 :epilogue-code '(PROGN (UNLESS (IGNORE-ERRORS (REQUIRE "CMP"))
					(TERPRI)
					(PRINC ";;; Failed to load compiler module!")
					(TERPRI))
				(SI::TOP-LEVEL))
|#
	 )
  (mkcl:quit :exit-code 1))


(mkcl:quit :exit-code 0) ;; tell make that all is well.

