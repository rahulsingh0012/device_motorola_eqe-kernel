/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_MEMBARRIER_H
#define _UAPI_LINUX_MEMBARRIER_H
enum membarrier_cmd {
  MEMBARRIER_CMD_QUERY = 0,
  MEMBARRIER_CMD_GLOBAL = (1 << 0),
  MEMBARRIER_CMD_GLOBAL_EXPEDITED = (1 << 1),
  MEMBARRIER_CMD_REGISTER_GLOBAL_EXPEDITED = (1 << 2),
  MEMBARRIER_CMD_PRIVATE_EXPEDITED = (1 << 3),
  MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED = (1 << 4),
  MEMBARRIER_CMD_PRIVATE_EXPEDITED_SYNC_CORE = (1 << 5),
  MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED_SYNC_CORE = (1 << 6),
  MEMBARRIER_CMD_PRIVATE_EXPEDITED_RSEQ = (1 << 7),
  MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED_RSEQ = (1 << 8),
  MEMBARRIER_CMD_SHARED = MEMBARRIER_CMD_GLOBAL,
};
enum membarrier_cmd_flag {
  MEMBARRIER_CMD_FLAG_CPU = (1 << 0),
};
#endif
