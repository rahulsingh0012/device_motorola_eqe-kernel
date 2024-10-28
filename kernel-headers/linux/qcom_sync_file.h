/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_SPEC_SYNC_H
#define _UAPI_LINUX_SPEC_SYNC_H
#include <linux/ioctl.h>
#include <linux/types.h>
#define SPEC_FENCE_SIGNAL_ANY 0x1
#define SPEC_FENCE_SIGNAL_ALL 0x2
struct fence_bind_data {
  __u32 out_bind_fd;
  __u64 fds;
};
struct fence_create_data {
  __u32 num_fences;
  __u32 flags;
  __u32 out_bind_fd;
};
#define SPEC_SYNC_MAGIC '>'
#define SPEC_SYNC_IOC_BIND _IOWR(SPEC_SYNC_MAGIC, 3, struct fence_bind_data)
#define SPEC_SYNC_IOC_CREATE_FENCE _IOWR(SPEC_SYNC_MAGIC, 4, struct fence_create_data)
#define SPEC_SYNC_IOC_GET_VER _IOWR(SPEC_SYNC_MAGIC, 5, __u64)
#endif
