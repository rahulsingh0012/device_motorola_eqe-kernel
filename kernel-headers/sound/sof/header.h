/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __INCLUDE_UAPI_SOUND_SOF_USER_HEADER_H__
#define __INCLUDE_UAPI_SOUND_SOF_USER_HEADER_H__
#include <linux/types.h>
struct sof_abi_hdr {
  __u32 magic;
  __u32 type;
  __u32 size;
  __u32 abi;
  __u32 reserved[4];
  __u32 data[0];
} __attribute__((__packed__));
#endif
