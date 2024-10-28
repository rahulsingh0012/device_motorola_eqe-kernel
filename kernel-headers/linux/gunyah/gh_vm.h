/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_GH_VM
#define _UAPI_LINUX_GH_VM
#include <linux/types.h>
#include <linux/ioctl.h>
#define GH_VM_IOCTL_TYPE 'g'
#define GH_VM_API_MAJOR_VERSION 0x1
#define GH_VM_API_MINOR_VERSION 0x0
struct gh_vm_api_version {
  unsigned int major;
  unsigned int minor;
};
#define GH_VM_GET_API_VERSION _IOR(GH_VM_IOCTL_TYPE, 0x1, struct gh_vm_api_version)
enum gh_vm_types {
  GH_VM_TYPE_SEC,
  GH_VM_TYPES_MAX,
};
#define GH_VM_NAME_MAX 16
struct gh_vm_create {
  __u32 type;
  char name[GH_VM_NAME_MAX];
};
#define GH_VM_CREATE _IOW(GH_VM_IOCTL_TYPE, 0x2, struct gh_vm_create)
#define GH_VM_SEC_START _IO(GH_VM_IOCTL_TYPE, 0x3)
enum gh_vm_sec_stop {
  GH_VM_STOP_SHUTDOWN,
  GH_VM_STOP_RESTART,
  GH_VM_STOP_CRASH,
  GH_VM_STOP_FORCE_STOP,
  GH_VM_STOP_MAX,
};
#define GH_VM_SEC_STOP _IOW(GH_VM_IOCTL_TYPE, 0x4, __u32)
enum gh_vm_sec_exit_reasons {
  GH_VM_EXIT_REASON_UNKNOWN,
  GH_VM_EXIT_REASON_SHUTDOWN,
  GH_VM_EXIT_REASON_RESTART,
  GH_VM_EXIT_REASON_PANIC,
  GH_VM_EXIT_REASON_NSWD,
  GH_VM_EXIT_REASON_HYP_ERROR,
  GH_VM_EXIT_REASON_ASYNC_EXT_ABORT,
  GH_VM_EXIT_REASON_FORCE_STOPPED,
  GH_VM_EXIT_REASONS_MAX,
};
struct gh_vm_sec_exit_status {
  __u32 reason;
};
#define GH_VM_SEC_WAIT_FOR_EXIT _IOR(GH_VM_IOCTL_TYPE, 0x5, struct gh_vm_sec_exit_status)
enum gh_vm_sec_restart_levels {
  GH_VM_RESTART_LEVEL_SYSTEM,
  GH_VM_RESTART_LEVEL_RELATIVE,
  GH_VM_RESTART_LEVELS_MAX,
};
#define GH_VM_SEC_SET_RESTART_LEVEL _IOW(GH_VM_IOCTL_TYPE, 0x6, __u32)
#endif
