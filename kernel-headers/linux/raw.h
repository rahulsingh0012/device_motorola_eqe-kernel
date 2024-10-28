/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __LINUX_RAW_H
#define __LINUX_RAW_H
#include <linux/types.h>
#define RAW_SETBIND _IO(0xac, 0)
#define RAW_GETBIND _IO(0xac, 1)
struct raw_config_request {
  int raw_minor;
  __u64 block_major;
  __u64 block_minor;
};
#endif
