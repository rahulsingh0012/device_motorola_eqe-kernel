/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _QCEDEV__H
#define _QCEDEV__H
#include <linux/types.h>
#include <linux/ioctl.h>
#include "fips_status.h"
#define QCEDEV_MAX_SHA_BLOCK_SIZE 64
#define QCEDEV_MAX_BEARER 31
#define QCEDEV_MAX_KEY_SIZE 64
#define QCEDEV_MAX_IV_SIZE 32
#define QCEDEV_MAX_BUFFERS 16
#define QCEDEV_MAX_SHA_DIGEST 32
#define QCEDEV_USE_PMEM 1
#define QCEDEV_NO_PMEM 0
#define QCEDEV_AES_KEY_128 16
#define QCEDEV_AES_KEY_192 24
#define QCEDEV_AES_KEY_256 32
enum qcedev_oper_enum {
  QCEDEV_OPER_DEC = 0,
  QCEDEV_OPER_ENC = 1,
  QCEDEV_OPER_DEC_NO_KEY = 2,
  QCEDEV_OPER_ENC_NO_KEY = 3,
  QCEDEV_OPER_LAST
};
enum qcedev_offload_oper_enum {
  QCEDEV_OFFLOAD_HLOS_HLOS = 1,
  QCEDEV_OFFLOAD_HLOS_CPB = 2,
  QCEDEV_OFFLOAD_CPB_HLOS = 3,
  QCEDEV_OFFLOAD_HLOS_CPB_1 = 4,
  QCEDEV_OFFLOAD_HLOS_CPB_2 = 5,
  QCEDEV_OFFLOAD_HLOS_CPB_3 = 6,
  QCEDEV_OFFLOAD_HLOS_CPB_4 = 7,
  QCEDEV_OFFLOAD_OPER_LAST
};
enum qcedev_offload_err_enum {
  QCEDEV_OFFLOAD_NO_ERROR = 0,
  QCEDEV_OFFLOAD_GENERIC_ERROR = 1,
  QCEDEV_OFFLOAD_KEY_TIMER_EXPIRED_ERROR = 2,
  QCEDEV_OFFLOAD_KEY_PAUSE_ERROR = 3
};
enum qcedev_cipher_alg_enum {
  QCEDEV_ALG_DES = 0,
  QCEDEV_ALG_3DES = 1,
  QCEDEV_ALG_AES = 2,
  QCEDEV_ALG_LAST
};
enum qcedev_cipher_mode_enum {
  QCEDEV_AES_MODE_CBC = 0,
  QCEDEV_AES_MODE_ECB = 1,
  QCEDEV_AES_MODE_CTR = 2,
  QCEDEV_AES_MODE_XTS = 3,
  QCEDEV_AES_MODE_CCM = 4,
  QCEDEV_DES_MODE_CBC = 5,
  QCEDEV_DES_MODE_ECB = 6,
  QCEDEV_AES_DES_MODE_LAST
};
enum qcedev_sha_alg_enum {
  QCEDEV_ALG_SHA1 = 0,
  QCEDEV_ALG_SHA256 = 1,
  QCEDEV_ALG_SHA1_HMAC = 2,
  QCEDEV_ALG_SHA256_HMAC = 3,
  QCEDEV_ALG_AES_CMAC = 4,
  QCEDEV_ALG_SHA_ALG_LAST
};
struct buf_info {
  union {
    __u32 offset;
    __u8 * vaddr;
  };
  __u32 len;
};
struct qcedev_vbuf_info {
  struct buf_info src[QCEDEV_MAX_BUFFERS];
  struct buf_info dst[QCEDEV_MAX_BUFFERS];
};
struct qcedev_pmem_info {
  int fd_src;
  struct buf_info src[QCEDEV_MAX_BUFFERS];
  int fd_dst;
  struct buf_info dst[QCEDEV_MAX_BUFFERS];
};
struct qcedev_cipher_op_req {
  __u8 use_pmem;
  union {
    struct qcedev_pmem_info pmem;
    struct qcedev_vbuf_info vbuf;
  };
  __u32 entries;
  __u32 data_len;
  __u8 in_place_op;
  __u8 enckey[QCEDEV_MAX_KEY_SIZE];
  __u32 encklen;
  __u8 iv[QCEDEV_MAX_IV_SIZE];
  __u32 ivlen;
  __u32 byteoffset;
  enum qcedev_cipher_alg_enum alg;
  enum qcedev_cipher_mode_enum mode;
  enum qcedev_oper_enum op;
};
struct qcedev_sha_op_req {
  struct buf_info data[QCEDEV_MAX_BUFFERS];
  __u32 entries;
  __u32 data_len;
  __u8 digest[QCEDEV_MAX_SHA_DIGEST];
  __u32 diglen;
  __u8 * authkey;
  __u32 authklen;
  enum qcedev_sha_alg_enum alg;
};
struct pattern_info {
  __u8 patt_sz;
  __u8 proc_data_sz;
  __u8 patt_offset;
};
struct qcedev_offload_cipher_op_req {
  struct qcedev_vbuf_info vbuf;
  __u32 entries;
  __u32 data_len;
  __u32 in_place_op;
  __u32 encklen;
  __u8 iv[QCEDEV_MAX_IV_SIZE];
  __u32 ivlen;
  __u32 iv_ctr_size;
  __u32 byteoffset;
  __u8 block_offset;
  __u8 is_pattern_valid;
  __u8 is_copy_op;
  struct pattern_info pattern_info;
  enum qcedev_cipher_alg_enum alg;
  enum qcedev_cipher_mode_enum mode;
  enum qcedev_offload_oper_enum op;
  enum qcedev_offload_err_enum err;
};
struct qfips_verify_t {
  unsigned int kernel_size;
  void * kernel;
};
struct qcedev_map_buf_req {
  __s32 fd[QCEDEV_MAX_BUFFERS];
  __u32 num_fds;
  __u32 fd_size[QCEDEV_MAX_BUFFERS];
  __u32 fd_offset[QCEDEV_MAX_BUFFERS];
  __u64 buf_vaddr[QCEDEV_MAX_BUFFERS];
};
struct qcedev_unmap_buf_req {
  __s32 fd[QCEDEV_MAX_BUFFERS];
  __u32 num_fds;
};
struct file;
#define QCEDEV_IOC_MAGIC 0x87
#define QCEDEV_IOCTL_ENC_REQ _IOWR(QCEDEV_IOC_MAGIC, 1, struct qcedev_cipher_op_req)
#define QCEDEV_IOCTL_DEC_REQ _IOWR(QCEDEV_IOC_MAGIC, 2, struct qcedev_cipher_op_req)
#define QCEDEV_IOCTL_SHA_INIT_REQ _IOWR(QCEDEV_IOC_MAGIC, 3, struct qcedev_sha_op_req)
#define QCEDEV_IOCTL_SHA_UPDATE_REQ _IOWR(QCEDEV_IOC_MAGIC, 4, struct qcedev_sha_op_req)
#define QCEDEV_IOCTL_SHA_FINAL_REQ _IOWR(QCEDEV_IOC_MAGIC, 5, struct qcedev_sha_op_req)
#define QCEDEV_IOCTL_GET_SHA_REQ _IOWR(QCEDEV_IOC_MAGIC, 6, struct qcedev_sha_op_req)
#define QCEDEV_IOCTL_LOCK_CE _IO(QCEDEV_IOC_MAGIC, 7)
#define QCEDEV_IOCTL_UNLOCK_CE _IO(QCEDEV_IOC_MAGIC, 8)
#define QCEDEV_IOCTL_GET_CMAC_REQ _IOWR(QCEDEV_IOC_MAGIC, 9, struct qcedev_sha_op_req)
#define QCEDEV_IOCTL_MAP_BUF_REQ _IOWR(QCEDEV_IOC_MAGIC, 10, struct qcedev_map_buf_req)
#define QCEDEV_IOCTL_UNMAP_BUF_REQ _IOWR(QCEDEV_IOC_MAGIC, 11, struct qcedev_unmap_buf_req)
#define QCEDEV_IOCTL_OFFLOAD_OP_REQ _IOWR(QCEDEV_IOC_MAGIC, 12, struct qcedev_offload_cipher_op_req)
#endif
