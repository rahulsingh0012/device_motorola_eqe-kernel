/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_ASM_RISCV_SIGCONTEXT_H
#define _UAPI_ASM_RISCV_SIGCONTEXT_H
#include <asm/ptrace.h>
struct sigcontext {
  struct user_regs_struct sc_regs;
  union __riscv_fp_state sc_fpregs;
};
#endif
