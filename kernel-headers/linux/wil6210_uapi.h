/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __WIL6210_UAPI_H__
#define __WIL6210_UAPI_H__
#define
#include <linux/types.h>
#include <linux/sockios.h>
#define WIL_IOCTL_MEMIO (SIOCDEVPRIVATE + 2)
#define WIL_IOCTL_MEMIO_BLOCK (SIOCDEVPRIVATE + 3)
#define WIL_MMIO_READ 0
#define WIL_MMIO_WRITE 1
#define WIL_MMIO_OP_MASK 0xff
#define WIL_MMIO_ADDR_LINKER (0 << 8)
#define WIL_MMIO_ADDR_AHB (1 << 8)
#define WIL_MMIO_ADDR_BAR (2 << 8)
#define WIL_MMIO_ADDR_MASK 0xff00
struct wil_memio {
  __u32 op;
  __u32 addr;
  __u32 val;
};
struct wil_memio_block {
  __u32 op;
  __u32 addr;
  __u32 size;
  __u64  block;
};
#endif
