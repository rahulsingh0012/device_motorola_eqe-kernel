/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_ASM_X86_SIGNAL_H
#define _UAPI_ASM_X86_SIGNAL_H
#ifndef __ASSEMBLY__
#include <linux/types.h>
#include <linux/time.h>
#include <linux/compiler.h>
struct siginfo;
#define _KERNEL_NSIG 32
typedef unsigned long sigset_t;
#endif
#define SIGHUP 1
#define SIGINT 2
#define SIGQUIT 3
#define SIGILL 4
#define SIGTRAP 5
#define SIGABRT 6
#define SIGIOT 6
#define SIGBUS 7
#define SIGFPE 8
#define SIGKILL 9
#define SIGUSR1 10
#define SIGSEGV 11
#define SIGUSR2 12
#define SIGPIPE 13
#define SIGALRM 14
#define SIGTERM 15
#define SIGSTKFLT 16
#define SIGCHLD 17
#define SIGCONT 18
#define SIGSTOP 19
#define SIGTSTP 20
#define SIGTTIN 21
#define SIGTTOU 22
#define SIGURG 23
#define SIGXCPU 24
#define SIGXFSZ 25
#define SIGVTALRM 26
#define SIGPROF 27
#define SIGWINCH 28
#define SIGIO 29
#define SIGPOLL SIGIO
#define SIGPWR 30
#define SIGSYS 31
#define SIGUNUSED 31
#define __SIGRTMIN 32
#define __SIGRTMAX _KERNEL__NSIG
#define SA_RESTORER 0x04000000
#define MINSIGSTKSZ 2048
#define SIGSTKSZ 8192
#include <asm-generic/signal-defs.h>
#ifndef __ASSEMBLY__
#ifdef __i386__
struct __kernel_sigaction {
  union {
    __sighandler_t _sa_handler;
    void(* _sa_sigaction) (int, struct siginfo *, void *);
  } _u;
  sigset_t sa_mask;
  unsigned long sa_flags;
  void(* sa_restorer) (void);
};
#define sa_handler _u._sa_handler
#define sa_sigaction _u._sa_sigaction
#else
struct __kernel_sigaction {
  __sighandler_t sa_handler;
  unsigned long sa_flags;
  __sigrestore_t sa_restorer;
  sigset_t sa_mask;
};
#endif
typedef struct sigaltstack {
  void  * ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
#endif
#endif
