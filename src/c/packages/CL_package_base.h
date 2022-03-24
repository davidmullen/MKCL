/* -*- mode: c  -*- */
/*
    Copyright (c) 2022, Jean-Claude Beaudoin.

    This program is under GNU LGPL, you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    See file '../../../Copyright' for full details.
*/


#define MKCL_NAME_PPRINT(x) MKCL_IN_LISP(x)

#ifdef MKCL_MIN
#define MKCL_IN_LISP(x) NULL
#else
#define MKCL_IN_LISP(x) x
#endif

#ifdef MKCL_PACKAGE_BUILDER
#define SYMBOL_NAME(it) {				\
    (int8_t)mkcl_t_base_string, 0, FALSE, FALSE,	\
      mk_cl_Cnil,					\
      (sizeof(it)-1),					\
      (sizeof(it)-1),					\
      (it),						\
      NULL, NULL,					\
      }
#else
# define SYMBOL_NAME(it) MKCL_BASE_STRING_INIT(it)
#endif

struct mkcl_base_string const mkcl_cl_external_symbol_names[] = {
  SYMBOL_NAME("NIL"),
  SYMBOL_NAME("T"),
  SYMBOL_NAME("&ALLOW-OTHER-KEYS"),
  SYMBOL_NAME("&AUX"),
  SYMBOL_NAME("&BODY"),
  SYMBOL_NAME("&ENVIRONMENT"),
  SYMBOL_NAME("&KEY"),
  SYMBOL_NAME("&OPTIONAL"),
  SYMBOL_NAME("&REST"),
  SYMBOL_NAME("&WHOLE"),
  SYMBOL_NAME("+"),
  SYMBOL_NAME("++"),
  SYMBOL_NAME("+++"),
  SYMBOL_NAME("-"),
  SYMBOL_NAME("*"),
  SYMBOL_NAME("**"),
  SYMBOL_NAME("***"),
  SYMBOL_NAME("/"),
  SYMBOL_NAME("//"),
  SYMBOL_NAME("///"),
  SYMBOL_NAME("/="),
  SYMBOL_NAME("*BREAK-ON-SIGNALS*"),
  SYMBOL_NAME("*COMPILE-FILE-PATHNAME*"),
  SYMBOL_NAME("*COMPILE-FILE-TRUENAME*"),
  SYMBOL_NAME("*COMPILE-PRINT*"),
  SYMBOL_NAME("*COMPILE-VERBOSE*"),
  SYMBOL_NAME("*DEBUG-IO*"),
  SYMBOL_NAME("*DEBUGGER-HOOK*"),
  SYMBOL_NAME("*DEFAULT-PATHNAME-DEFAULTS*"),
  SYMBOL_NAME("*ERROR-OUTPUT*"),
  SYMBOL_NAME("*FEATURES*"),
  SYMBOL_NAME("*GENSYM-COUNTER*"),
  SYMBOL_NAME("*LOAD-PATHNAME*"),
  SYMBOL_NAME("*LOAD-PRINT*"),
  SYMBOL_NAME("*LOAD-TRUENAME*"),
  SYMBOL_NAME("*LOAD-VERBOSE*"),
  SYMBOL_NAME("*MACROEXPAND-HOOK*"),
  SYMBOL_NAME("*MODULES*"),
  SYMBOL_NAME("*PACKAGE*"),
  SYMBOL_NAME("*PRINT-ARRAY*"),
  SYMBOL_NAME("*PRINT-BASE*"),
  SYMBOL_NAME("*PRINT-CASE*"),
  SYMBOL_NAME("*PRINT-CIRCLE*"),
  SYMBOL_NAME("*PRINT-ESCAPE*"),
  SYMBOL_NAME("*PRINT-GENSYM*"),
  SYMBOL_NAME("*PRINT-LENGTH*"),
  SYMBOL_NAME("*PRINT-LEVEL*"),
  SYMBOL_NAME("*PRINT-LINES*"),
  SYMBOL_NAME("*PRINT-MISER-WIDTH*"),
  SYMBOL_NAME("*PRINT-PPRINT-DISPATCH*"),
  SYMBOL_NAME("*PRINT-PRETTY*"),
  SYMBOL_NAME("*PRINT-RADIX*"),
  SYMBOL_NAME("*PRINT-READABLY*"),
  SYMBOL_NAME("*PRINT-RIGHT-MARGIN*"),
  SYMBOL_NAME("*QUERY-IO*"),
  SYMBOL_NAME("*RANDOM-STATE*"),
  SYMBOL_NAME("*READ-BASE*"),
  SYMBOL_NAME("*READ-DEFAULT-FLOAT-FORMAT*"),
  SYMBOL_NAME("*READ-EVAL*"),
  SYMBOL_NAME("*READ-SUPPRESS*"),
  SYMBOL_NAME("*READTABLE*"),
  SYMBOL_NAME("*STANDARD-INPUT*"),
  SYMBOL_NAME("*STANDARD-OUTPUT*"),
  SYMBOL_NAME("*TERMINAL-IO*"),
  SYMBOL_NAME("*TRACE-OUTPUT*"),
  SYMBOL_NAME("1+"),
  SYMBOL_NAME("1-"),
  SYMBOL_NAME("<"),
  SYMBOL_NAME("<="),
  SYMBOL_NAME("="),
  SYMBOL_NAME(">"),
  SYMBOL_NAME(">="),
  SYMBOL_NAME("ABORT"),
  SYMBOL_NAME("ABS"),
  SYMBOL_NAME("ACONS"),
  SYMBOL_NAME("ACOS"),
  SYMBOL_NAME("ACOSH"),
  SYMBOL_NAME("ADJOIN"),
  SYMBOL_NAME("ADJUST-ARRAY"),
  SYMBOL_NAME("ADJUSTABLE-ARRAY-P"),
  SYMBOL_NAME("ALPHA-CHAR-P"),
  SYMBOL_NAME("ALPHANUMERICP"),
  SYMBOL_NAME("AND"),
  SYMBOL_NAME("APPEND"),
  SYMBOL_NAME("APPLY"),
  SYMBOL_NAME("APROPOS"),
  SYMBOL_NAME("APROPOS-LIST"),
  SYMBOL_NAME("AREF"),
  SYMBOL_NAME("ARITHMETIC-ERROR"),
  SYMBOL_NAME("ARITHMETIC-ERROR-OPERANDS"),
  SYMBOL_NAME("ARITHMETIC-ERROR-OPERATION"),
  SYMBOL_NAME("ARRAY"),
  SYMBOL_NAME("ARRAY-DIMENSION"),
  SYMBOL_NAME("ARRAY-DIMENSION-LIMIT"),
  SYMBOL_NAME("ARRAY-DIMENSIONS"),
  SYMBOL_NAME("ARRAY-DISPLACEMENT"),
  SYMBOL_NAME("ARRAY-ELEMENT-TYPE"),
  SYMBOL_NAME("ARRAY-HAS-FILL-POINTER-P"),
  SYMBOL_NAME("ARRAY-IN-BOUNDS-P"),
  SYMBOL_NAME("ARRAY-RANK"),
  SYMBOL_NAME("ARRAY-RANK-LIMIT"),
  SYMBOL_NAME("ARRAY-ROW-MAJOR-INDEX"),
  SYMBOL_NAME("ARRAY-TOTAL-SIZE"),
  SYMBOL_NAME("ARRAY-TOTAL-SIZE-LIMIT"),
  SYMBOL_NAME("ARRAYP"),
  SYMBOL_NAME("ASH"),
  SYMBOL_NAME("ASIN"),
  SYMBOL_NAME("ASINH"),
  SYMBOL_NAME("ASSERT"),
  SYMBOL_NAME("ASSOC"),
  SYMBOL_NAME("ASSOC-IF"),
  SYMBOL_NAME("ASSOC-IF-NOT"),
  SYMBOL_NAME("ATAN"),
  SYMBOL_NAME("ATANH"),
  SYMBOL_NAME("ATOM"),
  SYMBOL_NAME("BASE-CHAR"),
  SYMBOL_NAME("BASE-STRING"),
  SYMBOL_NAME("BIGNUM"),
  SYMBOL_NAME("BIT"),
  SYMBOL_NAME("BIT-AND"),
  SYMBOL_NAME("BIT-ANDC1"),
  SYMBOL_NAME("BIT-ANDC2"),
  SYMBOL_NAME("BIT-EQV"),
  SYMBOL_NAME("BIT-IOR"),
  SYMBOL_NAME("BIT-NAND"),
  SYMBOL_NAME("BIT-NOR"),
  SYMBOL_NAME("BIT-NOT"),
  SYMBOL_NAME("BIT-ORC1"),
  SYMBOL_NAME("BIT-ORC2"),
  SYMBOL_NAME("BIT-VECTOR"),
  SYMBOL_NAME("BIT-VECTOR-P"),
  SYMBOL_NAME("BIT-XOR"),
  SYMBOL_NAME("BLOCK"),
  SYMBOL_NAME("BOOLE"),
  SYMBOL_NAME("BOOLE-1"),
  SYMBOL_NAME("BOOLE-2"),
  SYMBOL_NAME("BOOLE-AND"),
  SYMBOL_NAME("BOOLE-ANDC1"),
  SYMBOL_NAME("BOOLE-ANDC2"),
  SYMBOL_NAME("BOOLE-C1"),
  SYMBOL_NAME("BOOLE-C2"),
  SYMBOL_NAME("BOOLE-CLR"),
  SYMBOL_NAME("BOOLE-EQV"),
  SYMBOL_NAME("BOOLE-IOR"),
  SYMBOL_NAME("BOOLE-NAND"),
  SYMBOL_NAME("BOOLE-NOR"),
  SYMBOL_NAME("BOOLE-ORC1"),
  SYMBOL_NAME("BOOLE-ORC2"),
  SYMBOL_NAME("BOOLE-SET"),
  SYMBOL_NAME("BOOLE-XOR"),
  SYMBOL_NAME("BOOLEAN"),
  SYMBOL_NAME("BOTH-CASE-P"),
  SYMBOL_NAME("BOUNDP"),
  SYMBOL_NAME("BREAK"),
  SYMBOL_NAME("BROADCAST-STREAM"),
  SYMBOL_NAME("BROADCAST-STREAM-STREAMS"),
  SYMBOL_NAME("BUTLAST"),
  SYMBOL_NAME("BYTE"),
  SYMBOL_NAME("BYTE-POSITION"),
  SYMBOL_NAME("BYTE-SIZE"),
  SYMBOL_NAME("CAAAAR"),
  SYMBOL_NAME("CAAADR"),
  SYMBOL_NAME("CAAAR"),
  SYMBOL_NAME("CAADAR"),
  SYMBOL_NAME("CAADDR"),
  SYMBOL_NAME("CAADR"),
  SYMBOL_NAME("CAAR"),
  SYMBOL_NAME("CADAAR"),
  SYMBOL_NAME("CADADR"),
  SYMBOL_NAME("CADAR"),
  SYMBOL_NAME("CADDAR"),
  SYMBOL_NAME("CADDDR"),
  SYMBOL_NAME("CADDR"),
  SYMBOL_NAME("CADR"),
  SYMBOL_NAME("CALL-ARGUMENTS-LIMIT"),
  SYMBOL_NAME("CAR"),
  SYMBOL_NAME("CASE"),
  SYMBOL_NAME("CATCH"),
  SYMBOL_NAME("CCASE"),
  SYMBOL_NAME("CDAAAR"),
  SYMBOL_NAME("CDAADR"),
  SYMBOL_NAME("CDAAR"),
  SYMBOL_NAME("CDADAR"),
  SYMBOL_NAME("CDADDR"),
  SYMBOL_NAME("CDADR"),
  SYMBOL_NAME("CDAR"),
  SYMBOL_NAME("CDDAAR"),
  SYMBOL_NAME("CDDADR"),
  SYMBOL_NAME("CDDAR"),
  SYMBOL_NAME("CDDDAR"),
  SYMBOL_NAME("CDDDDR"),
  SYMBOL_NAME("CDDDR"),
  SYMBOL_NAME("CDDR"),
  SYMBOL_NAME("CDR"),
  SYMBOL_NAME("CEILING"),
  SYMBOL_NAME("CELL-ERROR"),
  SYMBOL_NAME("CELL-ERROR-NAME"),
  SYMBOL_NAME("CERROR"),
  SYMBOL_NAME("CHAR"),
  SYMBOL_NAME("CHAR-CODE"),
  SYMBOL_NAME("CHAR-CODE-LIMIT"),
  SYMBOL_NAME("CHAR-DOWNCASE"),
  SYMBOL_NAME("CHAR-EQUAL"),
  SYMBOL_NAME("CHAR-GREATERP"),
  SYMBOL_NAME("CHAR-INT"),
  SYMBOL_NAME("CHAR-LESSP"),
  SYMBOL_NAME("CHAR-NAME"),
  SYMBOL_NAME("CHAR-NOT-EQUAL"),
  SYMBOL_NAME("CHAR-NOT-GREATERP"),
  SYMBOL_NAME("CHAR-NOT-LESSP"),
  SYMBOL_NAME("CHAR-UPCASE"),
  SYMBOL_NAME("CHAR/="),
  SYMBOL_NAME("CHAR<"),
  SYMBOL_NAME("CHAR<="),
  SYMBOL_NAME("CHAR="),
  SYMBOL_NAME("CHAR>"),
  SYMBOL_NAME("CHAR>="),
  SYMBOL_NAME("CHARACTER"),
  SYMBOL_NAME("CHARACTERP"),
  SYMBOL_NAME("CHECK-TYPE"),
  SYMBOL_NAME("CIS"),
  SYMBOL_NAME("CLEAR-INPUT"),
  SYMBOL_NAME("CLEAR-OUTPUT"),
  SYMBOL_NAME("CLOSE"),
  SYMBOL_NAME("CLRHASH"),
  SYMBOL_NAME("CODE-CHAR"),
  SYMBOL_NAME("COERCE"),
  SYMBOL_NAME("COMPILATION-SPEED"),
  SYMBOL_NAME("COMPILE"),
  SYMBOL_NAME("COMPILE-FILE"),
  SYMBOL_NAME("COMPILE-FILE-PATHNAME"),
  SYMBOL_NAME("COMPILED-FUNCTION"),
  SYMBOL_NAME("COMPILED-FUNCTION-P"),
  SYMBOL_NAME("COMPILER-MACRO"),
  SYMBOL_NAME("COMPILER-MACRO-FUNCTION"),
  SYMBOL_NAME("COMPLEMENT"),
  SYMBOL_NAME("COMPLEX"),
  SYMBOL_NAME("COMPLEXP"),
  SYMBOL_NAME("COMPUTE-RESTARTS"),
  SYMBOL_NAME("CONCATENATE"),
  SYMBOL_NAME("CONCATENATED-STREAM"),
  SYMBOL_NAME("CONCATENATED-STREAM-STREAMS"),
  SYMBOL_NAME("COND"),
  SYMBOL_NAME("CONDITION"),
  SYMBOL_NAME("CONJUGATE"),
  SYMBOL_NAME("CONTINUE"),
  SYMBOL_NAME("CONS"),
  SYMBOL_NAME("CONSP"),
  SYMBOL_NAME("CONSTANTLY"),
  SYMBOL_NAME("CONSTANTP"),
  SYMBOL_NAME("CONTROL-ERROR"),
  SYMBOL_NAME("COPY-ALIST"),
  SYMBOL_NAME("COPY-LIST"),
  SYMBOL_NAME("COPY-PPRINT-DISPATCH"),
  SYMBOL_NAME("COPY-READTABLE"),
  SYMBOL_NAME("COPY-SEQ"),
  SYMBOL_NAME("COPY-STRUCTURE"),
  SYMBOL_NAME("COPY-SYMBOL"),
  SYMBOL_NAME("COPY-TREE"),
  SYMBOL_NAME("COS"),
  SYMBOL_NAME("COSH"),
  SYMBOL_NAME("COUNT"),
  SYMBOL_NAME("COUNT-IF"),
  SYMBOL_NAME("COUNT-IF-NOT"),
  SYMBOL_NAME("CTYPECASE"),
  SYMBOL_NAME("DEBUG"),
  SYMBOL_NAME("DECF"),
  SYMBOL_NAME("DECLAIM"),
  SYMBOL_NAME("DECLARATION"),
  SYMBOL_NAME("DECLARE"),
  SYMBOL_NAME("DECODE-FLOAT"),
  SYMBOL_NAME("DECODE-UNIVERSAL-TIME"),
  SYMBOL_NAME("DEFCONSTANT"),
  SYMBOL_NAME("DEFINE-CONDITION"),
  SYMBOL_NAME("DEFINE-COMPILER-MACRO"),
  SYMBOL_NAME("DEFINE-MODIFY-MACRO"),
  SYMBOL_NAME("DEFINE-SETF-EXPANDER"),
  SYMBOL_NAME("DEFINE-SYMBOL-MACRO"),
  SYMBOL_NAME("DEFMACRO"),
  SYMBOL_NAME("DEFPACKAGE"),
  SYMBOL_NAME("DEFPARAMETER"),
  SYMBOL_NAME("DEFSETF"),
  SYMBOL_NAME("DEFSTRUCT"),
  SYMBOL_NAME("DEFTYPE"),
  SYMBOL_NAME("DEFUN"),
  SYMBOL_NAME("DEFVAR"),
  SYMBOL_NAME("DELETE"),
  SYMBOL_NAME("DELETE-DUPLICATES"),
  SYMBOL_NAME("DELETE-FILE"),
  SYMBOL_NAME("DELETE-IF"),
  SYMBOL_NAME("DELETE-IF-NOT"),
  SYMBOL_NAME("DELETE-PACKAGE"),
  SYMBOL_NAME("DENOMINATOR"),
  SYMBOL_NAME("DEPOSIT-FIELD"),
  SYMBOL_NAME("DESCRIBE"),
  SYMBOL_NAME("DESTRUCTURING-BIND"),
  SYMBOL_NAME("DIGIT-CHAR"),
  SYMBOL_NAME("DIGIT-CHAR-P"),
  SYMBOL_NAME("DIRECTORY"),
  SYMBOL_NAME("DIRECTORY-NAMESTRING"),
  SYMBOL_NAME("DISASSEMBLE"),
  SYMBOL_NAME("DIVISION-BY-ZERO"),
  SYMBOL_NAME("DO"),
  SYMBOL_NAME("DO*"),
  SYMBOL_NAME("DO-ALL-SYMBOLS"),
  SYMBOL_NAME("DO-EXTERNAL-SYMBOLS"),
  SYMBOL_NAME("DO-SYMBOLS"),
  SYMBOL_NAME("DOCUMENTATION"),
  SYMBOL_NAME("DOLIST"),
  SYMBOL_NAME("DOTIMES"),
  SYMBOL_NAME("DOUBLE-FLOAT"),
  SYMBOL_NAME("DOUBLE-FLOAT-EPSILON"),
  SYMBOL_NAME("DOUBLE-FLOAT-NEGATIVE-EPSILON"),
  SYMBOL_NAME("DPB"),
  SYMBOL_NAME("DRIBBLE"),
  SYMBOL_NAME("DYNAMIC-EXTENT"),
  SYMBOL_NAME("ECASE"),
  SYMBOL_NAME("ECHO-STREAM"),
  SYMBOL_NAME("ECHO-STREAM-INPUT-STREAM"),
  SYMBOL_NAME("ECHO-STREAM-OUTPUT-STREAM"),
  SYMBOL_NAME("ED"),
  SYMBOL_NAME("EIGHTH"),
  SYMBOL_NAME("ELT"),
  SYMBOL_NAME("ENCODE-UNIVERSAL-TIME"),
  SYMBOL_NAME("END-OF-FILE"),
  SYMBOL_NAME("ENDP"),
  SYMBOL_NAME("ENOUGH-NAMESTRING"),
  SYMBOL_NAME("ENSURE-DIRECTORIES-EXIST"),
  SYMBOL_NAME("EQ"),
  SYMBOL_NAME("EQL"),
  SYMBOL_NAME("EQUAL"),
  SYMBOL_NAME("EQUALP"),
  SYMBOL_NAME("ERROR"),
  SYMBOL_NAME("ETYPECASE"),
  SYMBOL_NAME("EVAL"),
  SYMBOL_NAME("EVAL-WHEN"),
  SYMBOL_NAME("EVENP"),
  SYMBOL_NAME("EVERY"),
  SYMBOL_NAME("EXP"),
  SYMBOL_NAME("EXPORT"),
  SYMBOL_NAME("EXPT"),
  SYMBOL_NAME("EXTENDED-CHAR"),
  SYMBOL_NAME("FBOUNDP"),
  SYMBOL_NAME("FCEILING"),
  SYMBOL_NAME("FDEFINITION"),
  SYMBOL_NAME("FFLOOR"),
  SYMBOL_NAME("FIFTH"),
  SYMBOL_NAME("FILE-AUTHOR"),
  SYMBOL_NAME("FILE-ERROR"),
  SYMBOL_NAME("FILE-ERROR-PATHNAME"),
  SYMBOL_NAME("FILE-LENGTH"),
  SYMBOL_NAME("FILE-NAMESTRING"),
  SYMBOL_NAME("FILE-POSITION"),
  SYMBOL_NAME("FILE-STREAM"),
  SYMBOL_NAME("FILE-STRING-LENGTH"),
  SYMBOL_NAME("FILE-WRITE-DATE"),
  SYMBOL_NAME("FILL"),
  SYMBOL_NAME("FILL-POINTER"),
  SYMBOL_NAME("FIND"),
  SYMBOL_NAME("FIND-ALL-SYMBOLS"),
  SYMBOL_NAME("FIND-IF"),
  SYMBOL_NAME("FIND-IF-NOT"),
  SYMBOL_NAME("FIND-PACKAGE"),
  SYMBOL_NAME("FIND-RESTART"),
  SYMBOL_NAME("FIND-SYMBOL"),
  SYMBOL_NAME("FINISH-OUTPUT"),
  SYMBOL_NAME("FIRST"),
  SYMBOL_NAME("FIXNUM"),
  SYMBOL_NAME("FLET"),
  SYMBOL_NAME("FLOAT"),
  SYMBOL_NAME("FLOAT-DIGITS"),
  SYMBOL_NAME("FLOAT-PRECISION"),
  SYMBOL_NAME("FLOAT-RADIX"),
  SYMBOL_NAME("FLOAT-SIGN"),
  SYMBOL_NAME("FLOATING-POINT-INEXACT"),
  SYMBOL_NAME("FLOATING-POINT-INVALID-OPERATION"),
  SYMBOL_NAME("FLOATING-POINT-OVERFLOW"),
  SYMBOL_NAME("FLOATING-POINT-UNDERFLOW"),
  SYMBOL_NAME("FLOATP"),
  SYMBOL_NAME("FLOOR"),
  SYMBOL_NAME("FMAKUNBOUND"),
  SYMBOL_NAME("FORCE-OUTPUT"),
  SYMBOL_NAME("FORMAT"),
  SYMBOL_NAME("FORMATTER"),
  SYMBOL_NAME("FOURTH"),
  SYMBOL_NAME("FRESH-LINE"),
  SYMBOL_NAME("FROUND"),
  SYMBOL_NAME("FTRUNCATE"),
  SYMBOL_NAME("FTYPE"),
  SYMBOL_NAME("FUNCALL"),
  SYMBOL_NAME("FUNCTION-LAMBDA-EXPRESSION"),
  SYMBOL_NAME("FUNCTION"),
  SYMBOL_NAME("FUNCTION-KEYWORDS"),
  SYMBOL_NAME("FUNCTIONP"),
  SYMBOL_NAME("GCD"),
  SYMBOL_NAME("GENSYM"),
  SYMBOL_NAME("GENTEMP"),
  SYMBOL_NAME("GET"),
  SYMBOL_NAME("GET-DECODED-TIME"),
  SYMBOL_NAME("GET-DISPATCH-MACRO-CHARACTER"),
  SYMBOL_NAME("GET-INTERNAL-REAL-TIME"),
  SYMBOL_NAME("GET-INTERNAL-RUN-TIME"),
  SYMBOL_NAME("GET-MACRO-CHARACTER"),
  SYMBOL_NAME("GET-OUTPUT-STREAM-STRING"),
  SYMBOL_NAME("GET-PROPERTIES"),
  SYMBOL_NAME("GET-SETF-EXPANSION"),
  SYMBOL_NAME("GET-UNIVERSAL-TIME"),
  SYMBOL_NAME("GETF"),
  SYMBOL_NAME("GETHASH"),
  SYMBOL_NAME("GO"),
  SYMBOL_NAME("GRAPHIC-CHAR-P"),
  SYMBOL_NAME("HANDLER-CASE"),
  SYMBOL_NAME("HANDLER-BIND"),
  SYMBOL_NAME("HASH-TABLE"),
  SYMBOL_NAME("HASH-TABLE-COUNT"),
  SYMBOL_NAME("HASH-TABLE-P"),
  SYMBOL_NAME("HASH-TABLE-REHASH-SIZE"),
  SYMBOL_NAME("HASH-TABLE-REHASH-THRESHOLD"),
  SYMBOL_NAME("HASH-TABLE-SIZE"),
  SYMBOL_NAME("HASH-TABLE-TEST"),
  SYMBOL_NAME("HOST-NAMESTRING"),
  SYMBOL_NAME("IDENTITY"),
  SYMBOL_NAME("IGNORABLE"),
  SYMBOL_NAME("IGNORE"),
  SYMBOL_NAME("IGNORE-ERRORS"),
  SYMBOL_NAME("IMAGPART"),
  SYMBOL_NAME("IMPORT"),
  SYMBOL_NAME("IN-PACKAGE"),
  SYMBOL_NAME("INCF"),
  SYMBOL_NAME("INLINE"),
  SYMBOL_NAME("INPUT-STREAM-P"),
  SYMBOL_NAME("INSPECT"),
  SYMBOL_NAME("INTEGER"),
  SYMBOL_NAME("INTEGER-DECODE-FLOAT"),
  SYMBOL_NAME("INTEGER-LENGTH"),
  SYMBOL_NAME("INTEGERP"),
  SYMBOL_NAME("INTERACTIVE-STREAM-P"),
  SYMBOL_NAME("INTERN"),
  SYMBOL_NAME("INTERNAL-TIME-UNITS-PER-SECOND"),
  SYMBOL_NAME("INTERSECTION"),
  SYMBOL_NAME("INVOKE-DEBUGGER"),
  SYMBOL_NAME("INVOKE-RESTART"),
  SYMBOL_NAME("INVOKE-RESTART-INTERACTIVELY"),
  SYMBOL_NAME("ISQRT"),
  SYMBOL_NAME("KEYWORD"),
  SYMBOL_NAME("KEYWORDP"),
  SYMBOL_NAME("LABELS"),
  SYMBOL_NAME("LAMBDA"),
  SYMBOL_NAME("LAMBDA-LIST-KEYWORDS"),
  SYMBOL_NAME("LAMBDA-PARAMETERS-LIMIT"),
  SYMBOL_NAME("LAST"),
  SYMBOL_NAME("LCM"),
  SYMBOL_NAME("LDB"),
  SYMBOL_NAME("LDB-TEST"),
  SYMBOL_NAME("LDIFF"),
  SYMBOL_NAME("LEAST-NEGATIVE-DOUBLE-FLOAT"),
  SYMBOL_NAME("LEAST-NEGATIVE-LONG-FLOAT"),
  SYMBOL_NAME("LEAST-NEGATIVE-NORMALIZED-DOUBLE-FLOAT"),
  SYMBOL_NAME("LEAST-NEGATIVE-NORMALIZED-LONG-FLOAT"),
  SYMBOL_NAME("LEAST-NEGATIVE-NORMALIZED-SHORT-FLOAT"),
  SYMBOL_NAME("LEAST-NEGATIVE-NORMALIZED-SINGLE-FLOAT"),
  SYMBOL_NAME("LEAST-NEGATIVE-SHORT-FLOAT"),
  SYMBOL_NAME("LEAST-NEGATIVE-SINGLE-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-DOUBLE-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-LONG-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-NORMALIZED-DOUBLE-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-NORMALIZED-LONG-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-NORMALIZED-SHORT-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-NORMALIZED-SINGLE-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-SHORT-FLOAT"),
  SYMBOL_NAME("LEAST-POSITIVE-SINGLE-FLOAT"),
  SYMBOL_NAME("LENGTH"),
  SYMBOL_NAME("LET"),
  SYMBOL_NAME("LET*"),
  SYMBOL_NAME("LISP-IMPLEMENTATION-TYPE"),
  SYMBOL_NAME("LISP-IMPLEMENTATION-VERSION"),
  SYMBOL_NAME("LIST"),
  SYMBOL_NAME("LIST*"),
  SYMBOL_NAME("LIST-ALL-PACKAGES"),
  SYMBOL_NAME("LIST-LENGTH"),
  SYMBOL_NAME("LISTEN"),
  SYMBOL_NAME("LISTP"),
  SYMBOL_NAME("LOAD"),
  SYMBOL_NAME("LOAD-LOGICAL-PATHNAME-TRANSLATIONS"),
  SYMBOL_NAME("LOAD-TIME-VALUE"),
  SYMBOL_NAME("LOCALLY"),
  SYMBOL_NAME("LOG"),
  SYMBOL_NAME("LOGAND"),
  SYMBOL_NAME("LOGANDC1"),
  SYMBOL_NAME("LOGANDC2"),
  SYMBOL_NAME("LOGBITP"),
  SYMBOL_NAME("LOGCOUNT"),
  SYMBOL_NAME("LOGEQV"),
  SYMBOL_NAME("LOGICAL-PATHNAME"),
  SYMBOL_NAME("LOGICAL-PATHNAME-TRANSLATIONS"),
  SYMBOL_NAME("LOGIOR"),
  SYMBOL_NAME("LOGNAND"),
  SYMBOL_NAME("LOGNOR"),
  SYMBOL_NAME("LOGNOT"),
  SYMBOL_NAME("LOGORC1"),
  SYMBOL_NAME("LOGORC2"),
  SYMBOL_NAME("LOGTEST"),
  SYMBOL_NAME("LOGXOR"),
  SYMBOL_NAME("LONG-FLOAT"),
  SYMBOL_NAME("LONG-FLOAT-EPSILON"),
  SYMBOL_NAME("LONG-FLOAT-NEGATIVE-EPSILON"),
  SYMBOL_NAME("LONG-SITE-NAME"),
  SYMBOL_NAME("LOOP"),
  SYMBOL_NAME("LOOP-FINISH"),
  SYMBOL_NAME("LOWER-CASE-P"),
  SYMBOL_NAME("MACHINE-INSTANCE"),
  SYMBOL_NAME("MACHINE-TYPE"),
  SYMBOL_NAME("MACHINE-VERSION"),
  SYMBOL_NAME("MACRO-FUNCTION"),
  SYMBOL_NAME("MACROEXPAND"),
  SYMBOL_NAME("MACROEXPAND-1"),
  SYMBOL_NAME("MACROLET"),
  SYMBOL_NAME("MAKE-ARRAY"),
  SYMBOL_NAME("MAKE-BROADCAST-STREAM"),
  SYMBOL_NAME("MAKE-CONDITION"),
  SYMBOL_NAME("MAKE-CONCATENATED-STREAM"),
  SYMBOL_NAME("MAKE-DISPATCH-MACRO-CHARACTER"),
  SYMBOL_NAME("MAKE-ECHO-STREAM"),
  SYMBOL_NAME("MAKE-HASH-TABLE"),
  SYMBOL_NAME("MAKE-LIST"),
  SYMBOL_NAME("MAKE-PACKAGE"),
  SYMBOL_NAME("MAKE-PATHNAME"),
  SYMBOL_NAME("MAKE-RANDOM-STATE"),
  SYMBOL_NAME("MAKE-SEQUENCE"),
  SYMBOL_NAME("MAKE-STRING"),
  SYMBOL_NAME("MAKE-STRING-INPUT-STREAM"),
  SYMBOL_NAME("MAKE-STRING-OUTPUT-STREAM"),
  SYMBOL_NAME("MAKE-SYMBOL"),
  SYMBOL_NAME("MAKE-SYNONYM-STREAM"),
  SYMBOL_NAME("MAKE-TWO-WAY-STREAM"),
  SYMBOL_NAME("MAKUNBOUND"),
  SYMBOL_NAME("MAP"),
  SYMBOL_NAME("MAP-INTO"),
  SYMBOL_NAME("MAPC"),
  SYMBOL_NAME("MAPCAN"),
  SYMBOL_NAME("MAPCAR"),
  SYMBOL_NAME("MAPCON"),
  SYMBOL_NAME("MAPHASH"),
  SYMBOL_NAME("MAPL"),
  SYMBOL_NAME("MAPLIST"),
  SYMBOL_NAME("MASK-FIELD"),
  SYMBOL_NAME("MAX"),
  SYMBOL_NAME("MEMBER"),
  SYMBOL_NAME("MEMBER-IF"),
  SYMBOL_NAME("MEMBER-IF-NOT"),
  SYMBOL_NAME("MERGE"),
  SYMBOL_NAME("MERGE-PATHNAMES"),
  SYMBOL_NAME("MIN"),
  SYMBOL_NAME("MINUSP"),
  SYMBOL_NAME("MISMATCH"),
  SYMBOL_NAME("MOD"),
  SYMBOL_NAME("MOST-NEGATIVE-DOUBLE-FLOAT"),
  SYMBOL_NAME("MOST-NEGATIVE-FIXNUM"),
  SYMBOL_NAME("MOST-NEGATIVE-LONG-FLOAT"),
  SYMBOL_NAME("MOST-NEGATIVE-SHORT-FLOAT"),
  SYMBOL_NAME("MOST-NEGATIVE-SINGLE-FLOAT"),
  SYMBOL_NAME("MOST-POSITIVE-DOUBLE-FLOAT"),
  SYMBOL_NAME("MOST-POSITIVE-FIXNUM"),
  SYMBOL_NAME("MOST-POSITIVE-LONG-FLOAT"),
  SYMBOL_NAME("MOST-POSITIVE-SHORT-FLOAT"),
  SYMBOL_NAME("MOST-POSITIVE-SINGLE-FLOAT"),
  SYMBOL_NAME("MUFFLE-WARNING"),
  SYMBOL_NAME("MULTIPLE-VALUE-BIND"),
  SYMBOL_NAME("MULTIPLE-VALUE-CALL"),
  SYMBOL_NAME("MULTIPLE-VALUE-LIST"),
  SYMBOL_NAME("MULTIPLE-VALUE-PROG1"),
  SYMBOL_NAME("MULTIPLE-VALUE-SETQ"),
  SYMBOL_NAME("MULTIPLE-VALUES-LIMIT"),
  SYMBOL_NAME("NAME-CHAR"),
  SYMBOL_NAME("NAMESTRING"),
  SYMBOL_NAME("NBUTLAST"),
  SYMBOL_NAME("NCONC"),
  SYMBOL_NAME("NINTERSECTION"),
  SYMBOL_NAME("NINTH"),
  SYMBOL_NAME("NOT"),
  SYMBOL_NAME("NOTANY"),
  SYMBOL_NAME("NOTEVERY"),
  SYMBOL_NAME("NOTINLINE"),
  SYMBOL_NAME("NRECONC"),
  SYMBOL_NAME("NREVERSE"),
  SYMBOL_NAME("NSET-DIFFERENCE"),
  SYMBOL_NAME("NSET-EXCLUSIVE-OR"),
  SYMBOL_NAME("NSTRING-CAPITALIZE"),
  SYMBOL_NAME("NSTRING-DOWNCASE"),
  SYMBOL_NAME("NSTRING-UPCASE"),
  SYMBOL_NAME("NSUBLIS"),
  SYMBOL_NAME("NSUBST"),
  SYMBOL_NAME("NSUBST-IF"),
  SYMBOL_NAME("NSUBST-IF-NOT"),
  SYMBOL_NAME("NSUBSTITUTE"),
  SYMBOL_NAME("NSUBSTITUTE-IF"),
  SYMBOL_NAME("NSUBSTITUTE-IF-NOT"),
  SYMBOL_NAME("NTH"),
  SYMBOL_NAME("NTH-VALUE"),
  SYMBOL_NAME("NTHCDR"),
  SYMBOL_NAME("NULL"),
  SYMBOL_NAME("NUMBER"),
  SYMBOL_NAME("NUMBERP"),
  SYMBOL_NAME("NUMERATOR"),
  SYMBOL_NAME("NUNION"),
  SYMBOL_NAME("ODDP"),
  SYMBOL_NAME("OPEN"),
  SYMBOL_NAME("OPEN-STREAM-P"),
  SYMBOL_NAME("OPTIMIZE"),
  SYMBOL_NAME("OR"),
  SYMBOL_NAME("OTHERWISE"),
  SYMBOL_NAME("OUTPUT-STREAM-P"),
  SYMBOL_NAME("PACKAGE"),
  SYMBOL_NAME("PACKAGE-ERROR"),
  SYMBOL_NAME("PACKAGE-ERROR-PACKAGE"),
  SYMBOL_NAME("PACKAGE-NAME"),
  SYMBOL_NAME("PACKAGE-NICKNAMES"),
  SYMBOL_NAME("PACKAGE-SHADOWING-SYMBOLS"),
  SYMBOL_NAME("PACKAGE-USE-LIST"),
  SYMBOL_NAME("PACKAGE-USED-BY-LIST"),
  SYMBOL_NAME("PACKAGEP"),
  SYMBOL_NAME("PAIRLIS"),
  SYMBOL_NAME("PARSE-ERROR"),
  SYMBOL_NAME("PARSE-INTEGER"),
  SYMBOL_NAME("PARSE-NAMESTRING"),
  SYMBOL_NAME("PATHNAME"),
  SYMBOL_NAME("PATHNAME-DEVICE"),
  SYMBOL_NAME("PATHNAME-DIRECTORY"),
  SYMBOL_NAME("PATHNAME-HOST"),
  SYMBOL_NAME("PATHNAME-MATCH-P"),
  SYMBOL_NAME("PATHNAME-NAME"),
  SYMBOL_NAME("PATHNAME-TYPE"),
  SYMBOL_NAME("PATHNAME-VERSION"),
  SYMBOL_NAME("PATHNAMEP"),
  SYMBOL_NAME("PEEK-CHAR"),
  SYMBOL_NAME("PHASE"),
  SYMBOL_NAME("PI"),
  SYMBOL_NAME("PLUSP"),
  SYMBOL_NAME("POP"),
  SYMBOL_NAME("POSITION"),
  SYMBOL_NAME("POSITION-IF"),
  SYMBOL_NAME("POSITION-IF-NOT"),
  SYMBOL_NAME("PPRINT"),
  SYMBOL_NAME("PPRINT-DISPATCH"),
  SYMBOL_NAME("PPRINT-EXIT-IF-LIST-EXHAUSTED"),
  SYMBOL_NAME("PPRINT-FILL"),
  SYMBOL_NAME("PPRINT-INDENT"),
  SYMBOL_NAME("PPRINT-LINEAR"),
  SYMBOL_NAME("PPRINT-LOGICAL-BLOCK"),
  SYMBOL_NAME("PPRINT-NEWLINE"),
  SYMBOL_NAME("PPRINT-POP"),
  SYMBOL_NAME("PPRINT-TAB"),
  SYMBOL_NAME("PPRINT-TABULAR"),
  SYMBOL_NAME("PRIN1"),
  SYMBOL_NAME("PRIN1-TO-STRING"),
  SYMBOL_NAME("PRINC"),
  SYMBOL_NAME("PRINC-TO-STRING"),
  SYMBOL_NAME("PRINT"),
  SYMBOL_NAME("PRINT-NOT-READABLE"),
  SYMBOL_NAME("PRINT-NOT-READABLE-OBJECT"),
  SYMBOL_NAME("PROBE-FILE"),
  SYMBOL_NAME("PROCLAIM"),
  SYMBOL_NAME("PROG"),
  SYMBOL_NAME("PROG*"),
  SYMBOL_NAME("PROG1"),
  SYMBOL_NAME("PROG2"),
  SYMBOL_NAME("PROGN"),
  SYMBOL_NAME("PROGRAM-ERROR"),
  SYMBOL_NAME("PROGV"),
  SYMBOL_NAME("PROVIDE"),
  SYMBOL_NAME("PSETF"),
  SYMBOL_NAME("PSETQ"),
  SYMBOL_NAME("PUSH"),
  SYMBOL_NAME("PUSHNEW"),
  SYMBOL_NAME("QUOTE"),
  SYMBOL_NAME("RANDOM"),
  SYMBOL_NAME("RANDOM-STATE"),
  SYMBOL_NAME("RANDOM-STATE-P"),
  SYMBOL_NAME("RASSOC"),
  SYMBOL_NAME("RASSOC-IF"),
  SYMBOL_NAME("RASSOC-IF-NOT"),
  SYMBOL_NAME("RATIO"),
  SYMBOL_NAME("RATIONAL"),
  SYMBOL_NAME("RATIONALIZE"),
  SYMBOL_NAME("RATIONALP"),
  SYMBOL_NAME("READ"),
  SYMBOL_NAME("READ-BYTE"),
  SYMBOL_NAME("READ-CHAR"),
  SYMBOL_NAME("READ-CHAR-NO-HANG"),
  SYMBOL_NAME("READ-DELIMITED-LIST"),
  SYMBOL_NAME("READ-FROM-STRING"),
  SYMBOL_NAME("READ-LINE"),
  SYMBOL_NAME("READ-PRESERVING-WHITESPACE"),
  SYMBOL_NAME("READ-SEQUENCE"),
  SYMBOL_NAME("READER-ERROR"),
  SYMBOL_NAME("READTABLE"),
  SYMBOL_NAME("READTABLE-CASE"),
  SYMBOL_NAME("READTABLEP"),
  SYMBOL_NAME("REAL"),
  SYMBOL_NAME("REALP"),
  SYMBOL_NAME("REALPART"),
  SYMBOL_NAME("REDUCE"),
  SYMBOL_NAME("REM"),
  SYMBOL_NAME("REMF"),
  SYMBOL_NAME("REMHASH"),
  SYMBOL_NAME("REMOVE"),
  SYMBOL_NAME("REMOVE-DUPLICATES"),
  SYMBOL_NAME("REMOVE-IF"),
  SYMBOL_NAME("REMOVE-IF-NOT"),
  SYMBOL_NAME("REMPROP"),
  SYMBOL_NAME("RENAME-FILE"),
  SYMBOL_NAME("RENAME-PACKAGE"),
  SYMBOL_NAME("REPLACE"),
  SYMBOL_NAME("REQUIRE"),
  SYMBOL_NAME("REST"),
  SYMBOL_NAME("RESTART"),
  SYMBOL_NAME("RESTART-BIND"),
  SYMBOL_NAME("RESTART-CASE"),
  SYMBOL_NAME("RESTART-NAME"),
  SYMBOL_NAME("RETURN"),
  SYMBOL_NAME("RETURN-FROM"),
  SYMBOL_NAME("REVAPPEND"),
  SYMBOL_NAME("REVERSE"),
  SYMBOL_NAME("ROOM"),
  SYMBOL_NAME("ROTATEF"),
  SYMBOL_NAME("ROUND"),
  SYMBOL_NAME("ROW-MAJOR-AREF"),
  SYMBOL_NAME("RPLACA"),
  SYMBOL_NAME("RPLACD"),
  SYMBOL_NAME("SAFETY"),
  SYMBOL_NAME("SATISFIES"),
  SYMBOL_NAME("SBIT"),
  SYMBOL_NAME("SCALE-FLOAT"),
  SYMBOL_NAME("SCHAR"),
  SYMBOL_NAME("SEARCH"),
  SYMBOL_NAME("SECOND"),
  SYMBOL_NAME("SEQUENCE"),
  SYMBOL_NAME("SERIOUS-CONDITION"),
  SYMBOL_NAME("SET"),
  SYMBOL_NAME("SET-DIFFERENCE"),
  SYMBOL_NAME("SET-DISPATCH-MACRO-CHARACTER"),
  SYMBOL_NAME("SET-EXCLUSIVE-OR"),
  SYMBOL_NAME("SET-MACRO-CHARACTER"),
  SYMBOL_NAME("SET-PPRINT-DISPATCH"),
  SYMBOL_NAME("SET-SYNTAX-FROM-CHAR"),
  SYMBOL_NAME("SETF"),
  SYMBOL_NAME("SETQ"),
  SYMBOL_NAME("SEVENTH"),
  SYMBOL_NAME("SHADOW"),
  SYMBOL_NAME("SHADOWING-IMPORT"),
  SYMBOL_NAME("SHIFTF"),
  SYMBOL_NAME("SHORT-FLOAT"),
  SYMBOL_NAME("SHORT-FLOAT-EPSILON"),
  SYMBOL_NAME("SHORT-FLOAT-NEGATIVE-EPSILON"),
  SYMBOL_NAME("SHORT-SITE-NAME"),
  SYMBOL_NAME("SIGNAL"),
  SYMBOL_NAME("SIGNED-BYTE"),
  SYMBOL_NAME("SIGNUM"),
  SYMBOL_NAME("SIMPLE-ARRAY"),
  SYMBOL_NAME("SIMPLE-BASE-STRING"),
  SYMBOL_NAME("SIMPLE-BIT-VECTOR"),
  SYMBOL_NAME("SIMPLE-BIT-VECTOR-P"),
  SYMBOL_NAME("SIMPLE-CONDITION"),
  SYMBOL_NAME("SIMPLE-CONDITION-FORMAT-CONTROL"),
  SYMBOL_NAME("SIMPLE-CONDITION-FORMAT-ARGUMENTS"),
  SYMBOL_NAME("SIMPLE-ERROR"),
  SYMBOL_NAME("SIMPLE-STRING"),
  SYMBOL_NAME("SIMPLE-STRING-P"),
  SYMBOL_NAME("SIMPLE-TYPE-ERROR"),
  SYMBOL_NAME("SIMPLE-VECTOR"),
  SYMBOL_NAME("SIMPLE-VECTOR-P"),
  SYMBOL_NAME("SIMPLE-WARNING"),
  SYMBOL_NAME("SIN"),
  SYMBOL_NAME("SINGLE-FLOAT"),
  SYMBOL_NAME("SINGLE-FLOAT-EPSILON"),
  SYMBOL_NAME("SINGLE-FLOAT-NEGATIVE-EPSILON"),
  SYMBOL_NAME("SINH"),
  SYMBOL_NAME("SIXTH"),
  SYMBOL_NAME("SLEEP"),
  SYMBOL_NAME("SOFTWARE-TYPE"),
  SYMBOL_NAME("SOFTWARE-VERSION"),
  SYMBOL_NAME("SOME"),
  SYMBOL_NAME("SORT"),
  SYMBOL_NAME("SPACE"),
  SYMBOL_NAME("SPECIAL"),
  SYMBOL_NAME("SPECIAL-OPERATOR-P"),
  SYMBOL_NAME("SPEED"),
  SYMBOL_NAME("SQRT"),
  SYMBOL_NAME("STABLE-SORT"),
  SYMBOL_NAME("STANDARD-CHAR"),
  SYMBOL_NAME("STANDARD-CHAR-P"),
  SYMBOL_NAME("STEP"),
  SYMBOL_NAME("STORAGE-CONDITION"),
  SYMBOL_NAME("STORE-VALUE"),
  SYMBOL_NAME("STREAM"),
  SYMBOL_NAME("STREAM-ELEMENT-TYPE"),
  SYMBOL_NAME("STREAM-ERROR"),
  SYMBOL_NAME("STREAM-ERROR-STREAM"),
  SYMBOL_NAME("STREAM-EXTERNAL-FORMAT"),
  SYMBOL_NAME("STREAMP"),
  SYMBOL_NAME("STRING"),
  SYMBOL_NAME("STRING-DOWNCASE"),
  SYMBOL_NAME("STRING-CAPITALIZE"),
  SYMBOL_NAME("STRING-EQUAL"),
  SYMBOL_NAME("STRING-GREATERP"),
  SYMBOL_NAME("STRING-LEFT-TRIM"),
  SYMBOL_NAME("STRING-LESSP"),
  SYMBOL_NAME("STRING-NOT-EQUAL"),
  SYMBOL_NAME("STRING-NOT-GREATERP"),
  SYMBOL_NAME("STRING-NOT-LESSP"),
  SYMBOL_NAME("STRING-RIGHT-TRIM"),
  SYMBOL_NAME("STRING-STREAM"),
  SYMBOL_NAME("STRING-TRIM"),
  SYMBOL_NAME("STRING-UPCASE"),
  SYMBOL_NAME("STRING/="),
  SYMBOL_NAME("STRING<"),
  SYMBOL_NAME("STRING<="),
  SYMBOL_NAME("STRING="),
  SYMBOL_NAME("STRING>"),
  SYMBOL_NAME("STRING>="),
  SYMBOL_NAME("STRINGP"),
  SYMBOL_NAME("STRUCTURE"),
  SYMBOL_NAME("STYLE-WARNING"),
  SYMBOL_NAME("SUBLIS"),
  SYMBOL_NAME("SUBSEQ"),
  SYMBOL_NAME("SUBSETP"),
  SYMBOL_NAME("SUBST"),
  SYMBOL_NAME("SUBST-IF"),
  SYMBOL_NAME("SUBST-IF-NOT"),
  SYMBOL_NAME("SUBSTITUTE"),
  SYMBOL_NAME("SUBSTITUTE-IF"),
  SYMBOL_NAME("SUBSTITUTE-IF-NOT"),
  SYMBOL_NAME("SUBTYPEP"),
  SYMBOL_NAME("SVREF"),
  SYMBOL_NAME("SXHASH"),
  SYMBOL_NAME("SYMBOL"),
  SYMBOL_NAME("SYMBOL-FUNCTION"),
  SYMBOL_NAME("SYMBOL-MACROLET"),
  SYMBOL_NAME("SYMBOL-NAME"),
  SYMBOL_NAME("SYMBOL-PACKAGE"),
  SYMBOL_NAME("SYMBOL-PLIST"),
  SYMBOL_NAME("SYMBOL-VALUE"),
  SYMBOL_NAME("SYMBOLP"),
  SYMBOL_NAME("SYNONYM-STREAM"),
  SYMBOL_NAME("SYNONYM-STREAM-SYMBOL"),
  SYMBOL_NAME("TAGBODY"),
  SYMBOL_NAME("TAILP"),
  SYMBOL_NAME("TAN"),
  SYMBOL_NAME("TANH"),
  SYMBOL_NAME("TENTH"),
  SYMBOL_NAME("TERPRI"),
  SYMBOL_NAME("THE"),
  SYMBOL_NAME("THIRD"),
  SYMBOL_NAME("THROW"),
  SYMBOL_NAME("TIME"),
  SYMBOL_NAME("TRACE"),
  SYMBOL_NAME("TRANSLATE-LOGICAL-PATHNAME"),
  SYMBOL_NAME("TRANSLATE-PATHNAME"),
  SYMBOL_NAME("TREE-EQUAL"),
  SYMBOL_NAME("TRUENAME"),
  SYMBOL_NAME("TRUNCATE"),
  SYMBOL_NAME("TWO-WAY-STREAM"),
  SYMBOL_NAME("TWO-WAY-STREAM-INPUT-STREAM"),
  SYMBOL_NAME("TWO-WAY-STREAM-OUTPUT-STREAM"),
  SYMBOL_NAME("TYPE"),
  SYMBOL_NAME("TYPE-ERROR"),
  SYMBOL_NAME("TYPE-ERROR-DATUM"),
  SYMBOL_NAME("TYPE-ERROR-EXPECTED-TYPE"),
  SYMBOL_NAME("TYPE-OF"),
  SYMBOL_NAME("TYPECASE"),
  SYMBOL_NAME("TYPEP"),
  SYMBOL_NAME("UNBOUND-SLOT"),
  SYMBOL_NAME("UNBOUND-SLOT-INSTANCE"),
  SYMBOL_NAME("UNBOUND-VARIABLE"),
  SYMBOL_NAME("UNDEFINED-FUNCTION"),
  SYMBOL_NAME("UNEXPORT"),
  SYMBOL_NAME("UNINTERN"),
  SYMBOL_NAME("UNION"),
  SYMBOL_NAME("UNLESS"),
  SYMBOL_NAME("UNREAD-CHAR"),
  SYMBOL_NAME("UNSIGNED-BYTE"),
  SYMBOL_NAME("UNTRACE"),
  SYMBOL_NAME("UNUSE-PACKAGE"),
  SYMBOL_NAME("UNWIND-PROTECT"),
  SYMBOL_NAME("UPGRADED-ARRAY-ELEMENT-TYPE"),
  SYMBOL_NAME("UPGRADED-COMPLEX-PART-TYPE"),
  SYMBOL_NAME("UPPER-CASE-P"),
  SYMBOL_NAME("USE-PACKAGE"),
  SYMBOL_NAME("USE-VALUE"),
  SYMBOL_NAME("USER-HOMEDIR-PATHNAME"),
  SYMBOL_NAME("VALUES"),
  SYMBOL_NAME("VALUES-LIST"),
  SYMBOL_NAME("VARIABLE"),
  SYMBOL_NAME("VECTOR"),
  SYMBOL_NAME("VECTOR-POP"),
  SYMBOL_NAME("VECTOR-PUSH"),
  SYMBOL_NAME("VECTOR-PUSH-EXTEND"),
  SYMBOL_NAME("VECTORP"),
  SYMBOL_NAME("WARN"),
  SYMBOL_NAME("WARNING"),
  SYMBOL_NAME("WHEN"),
  SYMBOL_NAME("WILD-PATHNAME-P"),
  SYMBOL_NAME("WITH-COMPILATION-UNIT"),
  SYMBOL_NAME("WITH-CONDITION-RESTARTS"),
  SYMBOL_NAME("WITH-HASH-TABLE-ITERATOR"),
  SYMBOL_NAME("WITH-INPUT-FROM-STRING"),
  SYMBOL_NAME("WITH-OPEN-FILE"),
  SYMBOL_NAME("WITH-OPEN-STREAM"),
  SYMBOL_NAME("WITH-OUTPUT-TO-STRING"),
  SYMBOL_NAME("WITH-PACKAGE-ITERATOR"),
  SYMBOL_NAME("WITH-SIMPLE-RESTART"),
  SYMBOL_NAME("WITH-STANDARD-IO-SYNTAX"),
  SYMBOL_NAME("WRITE"),
  SYMBOL_NAME("WRITE-BYTE"),
  SYMBOL_NAME("WRITE-CHAR"),
  SYMBOL_NAME("WRITE-LINE"),
  SYMBOL_NAME("WRITE-SEQUENCE"),
  SYMBOL_NAME("WRITE-STRING"),
  SYMBOL_NAME("WRITE-TO-STRING"),
  SYMBOL_NAME("Y-OR-N-P"),
  SYMBOL_NAME("YES-OR-NO-P"),
  SYMBOL_NAME("ZEROP"),
  SYMBOL_NAME("ALLOCATE-INSTANCE"),
  SYMBOL_NAME("ADD-METHOD"),
  SYMBOL_NAME("BUILT-IN-CLASS"),
  SYMBOL_NAME("CALL-METHOD"),
  SYMBOL_NAME("CALL-NEXT-METHOD"),
  SYMBOL_NAME("CHANGE-CLASS"),
  SYMBOL_NAME("CLASS"),
  SYMBOL_NAME("CLASS-NAME"),
  SYMBOL_NAME("CLASS-OF"),
  SYMBOL_NAME("COMPUTE-APPLICABLE-METHODS"),
  SYMBOL_NAME("DEFCLASS"),
  SYMBOL_NAME("DEFGENERIC"),
  SYMBOL_NAME("DEFINE-METHOD-COMBINATION"),
  SYMBOL_NAME("DEFMETHOD"),
  SYMBOL_NAME("DESCRIBE-OBJECT"),
  SYMBOL_NAME("ENSURE-GENERIC-FUNCTION"),
  SYMBOL_NAME("FIND-CLASS"),
  SYMBOL_NAME("FIND-METHOD"),
  SYMBOL_NAME("GENERIC-FUNCTION"),
  SYMBOL_NAME("IF"),
  SYMBOL_NAME("INITIALIZE-INSTANCE"),
  SYMBOL_NAME("INVALID-METHOD-ERROR"),
  SYMBOL_NAME("MAKE-INSTANCE"),
  SYMBOL_NAME("MAKE-INSTANCES-OBSOLETE"),
  SYMBOL_NAME("MAKE-LOAD-FORM"),
  SYMBOL_NAME("MAKE-LOAD-FORM-SAVING-SLOTS"),
  SYMBOL_NAME("MAKE-METHOD"),
  SYMBOL_NAME("METHOD"),
  SYMBOL_NAME("METHOD-COMBINATION-ERROR"),
  SYMBOL_NAME("METHOD-COMBINATION"),
  SYMBOL_NAME("METHOD-QUALIFIERS"),
  SYMBOL_NAME("NEXT-METHOD-P"),
  SYMBOL_NAME("NO-APPLICABLE-METHOD"),
  SYMBOL_NAME("NO-NEXT-METHOD"),
  SYMBOL_NAME("PRINT-OBJECT"),
  SYMBOL_NAME("PRINT-UNREADABLE-OBJECT"),
  SYMBOL_NAME("REINITIALIZE-INSTANCE"),
  SYMBOL_NAME("REMOVE-METHOD"),
  SYMBOL_NAME("SHARED-INITIALIZE"),
  SYMBOL_NAME("SLOT-BOUNDP"),
  SYMBOL_NAME("SLOT-EXISTS-P"),
  SYMBOL_NAME("SLOT-MAKUNBOUND"),
  SYMBOL_NAME("SLOT-MISSING"),
  SYMBOL_NAME("SLOT-UNBOUND"),
  SYMBOL_NAME("SLOT-VALUE"),
  SYMBOL_NAME("STANDARD"),
  SYMBOL_NAME("STANDARD-CLASS"),
  SYMBOL_NAME("STANDARD-GENERIC-FUNCTION"),
  SYMBOL_NAME("STANDARD-METHOD"),
  SYMBOL_NAME("STANDARD-OBJECT"),
  SYMBOL_NAME("STRUCTURE-CLASS"),
  SYMBOL_NAME("STRUCTURE-OBJECT"),
  SYMBOL_NAME("UPDATE-INSTANCE-FOR-DIFFERENT-CLASS"),
  SYMBOL_NAME("UPDATE-INSTANCE-FOR-REDEFINED-CLASS"),
  SYMBOL_NAME("WITH-ACCESSORS"),
  SYMBOL_NAME("WITH-SLOTS"),
};


struct mkcl_base_string const mkcl_cl_internal_symbol_names[] = {
};


#define internal_count MKCL_NB_ELEMS(mkcl_cl_internal_symbol_names)
#define external_count MKCL_NB_ELEMS(mkcl_cl_external_symbol_names)
#define internal_size 13
#define external_size 1399

static struct mkcl_hashtable_entry internal_entries[];
static struct mkcl_hashtable_entry external_entries[];

static struct mkcl_hashtable_entry * internal_vector[];
static struct mkcl_hashtable_entry * external_vector[];

static struct mkcl_singlefloat rehash_size_factor = { mkcl_t_singlefloat, 0, 0, 0, 1.5f };
static struct mkcl_singlefloat rehash_threshold = { mkcl_t_singlefloat, 0, 0, 0, 0.75f };

static struct mkcl_hashtable internal_ht = {
  mkcl_t_hashtable, 0, mkcl_htt_package, 0, /* MKCL_HEADER2(test,lockable) */
  internal_vector, /* data */
#ifndef MKCL_PACKAGE_BUILDER
  mkcl_search_hash_package, /* search_fun */
  mkcl_hash_equal_package, /* hash_fun */
  mkcl_equality_fun_package, /* equality_fun */
#else
  NULL, /* search_fun */
  NULL, /* hash_fun */
  NULL, /* equality_fun */
#endif
  internal_count, /* entries */
  internal_size, /* size */
  (mkcl_object) &rehash_size_factor, /* rehash_size */
  (mkcl_object) &rehash_threshold, /* threshold */
  12, /* factor_of_16th */
  NULL /* free_bucket */
};

static struct mkcl_hashtable external_ht = {
  mkcl_t_hashtable, 0, mkcl_htt_package, 0, /* MKCL_HEADER2(test,lockable) */
  external_vector, /* data */
#ifndef MKCL_PACKAGE_BUILDER
  mkcl_search_hash_package, /* search_fun */
  mkcl_hash_equal_package, /* hash_fun */
  mkcl_equality_fun_package, /* equality_fun */
#else
  NULL, /* search_fun */
  NULL, /* hash_fun */
  NULL, /* equality_fun */
#endif
  external_count, /* entries */
  external_size, /* size */
  (mkcl_object) &rehash_size_factor, /* rehash_size */
  (mkcl_object) &rehash_threshold, /* threshold */
  12, /* factor_of_16th */
  NULL /* free_bucket */
};

static struct mkcl_base_string mkcl_package_name = SYMBOL_NAME("COMMON-LISP");

struct mkcl_package mkcl_package_cl = {
  mkcl_t_package, 0, 0, 0, /* MKCL_HEADER1(closed) */
  (mkcl_object) &mkcl_package_name, /* name */
  mk_cl_Cnil, /* nicknames */
  mk_cl_Cnil, /* shadowings */
  mk_cl_Cnil, /* uses */
  mk_cl_Cnil, /* usedby */
  (mkcl_object) &internal_ht, /* internal */
  (mkcl_object) &external_ht, /* external */
#ifndef MKCL_WINDOWS
  PTHREAD_MUTEX_INITIALIZER /* lock */
#endif
};