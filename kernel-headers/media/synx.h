/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __UAPI_SYNX_H__
#define __UAPI_SYNX_H__
#include <linux/types.h>
#include <linux/ioctl.h>
#define SYNX_USER_PAYLOAD_SIZE 4
#define SYNX_MAX_WAITING_SYNX 16
#define SYNX_CALLBACK_RESULT_SUCCESS 2
#define SYNX_CALLBACK_RESULT_FAILED 3
#define SYNX_CALLBACK_RESULT_CANCELED 4
struct synx_info {
  char name[64];
  __s32 synx_obj;
};
struct synx_userpayload_info {
  __s32 synx_obj;
  __u32 reserved;
  __u64 payload[SYNX_USER_PAYLOAD_SIZE];
};
struct synx_signal {
  __s32 synx_obj;
  __u32 synx_state;
};
struct synx_merge {
  __u64 synx_objs;
  __u32 num_objs;
  __s32 merged;
};
struct synx_wait {
  __s32 synx_obj;
  __u32 reserved;
  __u64 timeout_ms;
};
struct synx_external_desc {
  __u32 type;
  __u32 reserved;
  __s32 id[2];
};
struct synx_bind {
  __s32 synx_obj;
  __u32 reserved;
  struct synx_external_desc ext_sync_desc;
};
struct synx_addrefcount {
  __s32 synx_obj;
  __u32 count;
};
struct synx_id_info {
  __s32 synx_obj;
  __u32 secure_key;
  __s32 new_synx_obj;
  __u32 padding;
};
struct synx_fence_desc {
  __u32 type;
  __u32 reserved;
  __s32 id[2];
};
struct synx_create_v2 {
  char name[64];
  __u32 synx_obj;
  __u32 flags;
  struct synx_fence_desc desc;
};
struct synx_userpayload_info_v2 {
  __u32 synx_obj;
  __u32 reserved;
  __u64 payload[SYNX_USER_PAYLOAD_SIZE];
};
struct synx_signal_v2 {
  __u32 synx_obj;
  __u32 synx_state;
  __u64 reserved;
};
struct synx_merge_v2 {
  __u64 synx_objs;
  __u32 num_objs;
  __u32 merged;
  __u32 flags;
  __u32 reserved;
};
struct synx_wait_v2 {
  __u32 synx_obj;
  __u32 reserved;
  __u64 timeout_ms;
};
struct synx_external_desc_v2 {
  __u64 id;
  __u32 type;
  __u32 reserved;
};
struct synx_bind_v2 {
  __u32 synx_obj;
  __u32 reserved;
  struct synx_external_desc_v2 ext_sync_desc;
};
struct synx_import_info {
  __u32 synx_obj;
  __u32 flags;
  __u32 new_synx_obj;
  __u32 reserved;
  struct synx_fence_desc desc;
};
struct synx_import_arr_info {
  __u64 list;
  __u32 num_objs;
};
struct synx_fence_fd {
  __u32 synx_obj;
  __s32 fd;
};
struct synx_private_ioctl_arg {
  __u32 id;
  __u32 size;
  __u32 result;
  __u32 reserved;
  __u64 ioctl_ptr;
};
#define SYNX_PRIVATE_MAGIC_NUM 's'
#define SYNX_PRIVATE_IOCTL_CMD _IOWR(SYNX_PRIVATE_MAGIC_NUM, 130, struct synx_private_ioctl_arg)
#define SYNX_CREATE 0
#define SYNX_RELEASE 1
#define SYNX_SIGNAL 2
#define SYNX_MERGE 3
#define SYNX_REGISTER_PAYLOAD 4
#define SYNX_DEREGISTER_PAYLOAD 5
#define SYNX_WAIT 6
#define SYNX_BIND 7
#define SYNX_ADDREFCOUNT 8
#define SYNX_GETSTATUS 9
#define SYNX_IMPORT 10
#define SYNX_EXPORT 11
#define SYNX_IMPORT_ARR 12
#define SYNX_GETFENCE_FD 13
#endif
