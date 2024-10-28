/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_NFCINFO_H_
#define _UAPI_NFCINFO_H_
#include <linux/ioctl.h>
#define NFCC_MAGIC 0xE9
#define NFCC_GET_INFO _IOW(NFCC_MAGIC, 0x09, unsigned int)
struct nqx_devinfo {
  unsigned char chip_type;
  unsigned char rom_version;
  unsigned char fw_major;
  unsigned char fw_minor;
};
union nqx_uinfo {
  unsigned int i;
  struct nqx_devinfo info;
};
#endif