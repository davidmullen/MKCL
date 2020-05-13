/*
 * Copyright (c) 1994 by Xerox Corporation.  All rights reserved.
 * Copyright (c) 1996 by Silicon Graphics.  All rights reserved.
 * Copyright (c) 1998 by Fergus Henderson.  All rights reserved.
 * Copyright (c) 2000-2009 by Hewlett-Packard Development Company.
 * All rights reserved.
 *
 * THIS MATERIAL IS PROVIDED AS IS, WITH ABSOLUTELY NO WARRANTY EXPRESSED
 * OR IMPLIED.  ANY USE IS AT YOUR OWN RISK.
 *
 * Permission is hereby granted to use or copy this program
 * for any purpose,  provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 */

#ifndef MK_GC_PTHREAD_SUPPORT_H
#define MK_GC_PTHREAD_SUPPORT_H

#include "private/gc_priv.h"

#if defined(MK_GC_PTHREADS) && !defined(MK_GC_WIN32_THREADS)

#if defined(MK_GC_DARWIN_THREADS)
# include "private/darwin_stop_world.h"
#else
# include "private/pthread_stop_world.h"
#endif

#ifdef THREAD_LOCAL_ALLOC
# include "thread_local_alloc.h"
#endif

/* We use the allocation lock to protect thread-related data structures. */

/* The set of all known threads.  We intercept thread creation and      */
/* joins.                                                               */
/* Protected by allocation/GC lock.                                     */
/* Some of this should be declared volatile, but that's inconsistent    */
/* with some library routine declarations.                              */
typedef struct MK_GC_Thread_Rep {
    struct MK_GC_Thread_Rep * next;  /* More recently allocated threads    */
                                  /* with a given pthread id come       */
                                  /* first.  (All but the first are     */
                                  /* guaranteed to be dead, but we may  */
                                  /* not yet have registered the join.) */
    pthread_t id;
#   if 0 /* JCB */ && defined(PLATFORM_ANDROID)
      pid_t kernel_id;
#   endif
    /* Extra bookkeeping information the stopping code uses */
    struct thread_stop_info stop_info;

    unsigned char flags;
#       define FINISHED 1       /* Thread has exited.                   */
#       define DETACHED 2       /* Thread is treated as detached.       */
                                /* Thread may really be detached, or    */
                                /* it may have been explicitly          */
                                /* registered, in which case we can     */
                                /* deallocate its MK_GC_Thread_Rep once    */
                                /* it unregisters itself, since it      */
                                /* may not return a GC pointer.         */
#       define MAIN_THREAD 4    /* True for the original thread only.   */
#       define SUSPENDED_EXT 8  /* Thread was suspended externally      */
                                /* (this is not used by the unmodified  */
                                /* GC itself at present).               */
#       define DISABLED_GC 0x10 /* Collections are disabled while the   */
                                /* thread is exiting.                   */

    unsigned char thread_blocked;
                                /* Protected by GC lock.                */
                                /* Treated as a boolean value.  If set, */
                                /* thread will acquire GC lock before   */
                                /* doing any pointer manipulations, and */
                                /* has set its SP value.  Thus it does  */
                                /* not need to be sent a signal to stop */
                                /* it.                                  */

    unsigned short finalizer_skipped;
    unsigned char finalizer_nested;
                                /* Used by MK_GC_check_finalizer_nested()  */
                                /* to minimize the level of recursion   */
                                /* when a client finalizer allocates    */
                                /* memory (initially both are 0).       */

    ptr_t stack_end;            /* Cold end of the stack (except for    */
                                /* main thread).                        */
#   if defined(MK_GC_DARWIN_THREADS) && !defined(DARWIN_DONT_PARSE_STACK)
      ptr_t topOfStack;         /* Result of MK_GC_FindTopOfStack(0);      */
                                /* valid only if the thread is blocked; */
                                /* non-NULL value means already set.    */
#   endif
#   ifdef IA64
        ptr_t backing_store_end;
        ptr_t backing_store_ptr;
#   endif

    struct MK_GC_traced_stack_sect_s *traced_stack_sect;
                        /* Points to the "frame" data held in stack by  */
                        /* the innermost MK_GC_call_with_gc_active() of    */
                        /* this thread.  May be NULL.                   */

    void * status;              /* The value returned from the thread.  */
                                /* Used only to avoid premature         */
                                /* reclamation of any data it might     */
                                /* reference.                           */
                                /* This is unfortunately also the       */
                                /* reason we need to intercept join     */
                                /* and detach.                          */

#   ifdef THREAD_LOCAL_ALLOC
        struct thread_local_freelists tlfs;
#   endif
} * MK_GC_thread;

# define THREAD_TABLE_SZ 256    /* Must be power of 2   */
MK_GC_EXTERN volatile MK_GC_thread MK_GC_threads[THREAD_TABLE_SZ];

MK_GC_EXTERN MK_GC_bool MK_GC_thr_initialized;

MK_GC_INNER MK_GC_thread MK_GC_lookup_thread(pthread_t id);

MK_GC_EXTERN MK_GC_bool MK_GC_in_thread_creation;
        /* We may currently be in thread creation or destruction.       */
        /* Only set to TRUE while allocation lock is held.              */
        /* When set, it is OK to run GC from unknown thread.            */

#ifdef NACL
  MK_GC_EXTERN __thread MK_GC_thread MK_GC_nacl_gc_thread_self;
  MK_GC_INNER void MK_GC_nacl_initialize_gc_thread(void);
  MK_GC_INNER void MK_GC_nacl_shutdown_gc_thread(void);
#endif

#ifdef MK_GC_EXPLICIT_SIGNALS_UNBLOCK
  MK_GC_INNER void MK_GC_unblock_gc_signals(void);
#endif

#ifdef MK_GC_PTHREAD_START_STANDALONE
# define MK_GC_INNER_PTHRSTART /* empty */
#else
# define MK_GC_INNER_PTHRSTART MK_GC_INNER
#endif

MK_GC_INNER_PTHRSTART MK_GC_thread MK_GC_start_rtn_prepare_thread(
                                        void *(**pstart)(void *),
                                        void **pstart_arg,
                                        struct MK_GC_stack_base *sb, void *arg);
MK_GC_INNER_PTHRSTART void MK_GC_thread_exit_proc(void *);

#endif /* MK_GC_PTHREADS && !MK_GC_WIN32_THREADS */

#endif /* MK_GC_PTHREAD_SUPPORT_H */
