/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#include <linux/types.h>
#ifndef _UAPI_QBT_HANDLER_H_
#define _UAPI_QBT_HANDLER_H_
#define MAX_NAME_SIZE 32
#define QBT_IS_WUHB_CONNECTED 100
#define QBT_SEND_KEY_EVENT 101
#define QBT_ENABLE_IPC 102
#define QBT_DISABLE_IPC 103
#define QBT_ENABLE_FD 104
#define QBT_DISABLE_FD 105
#define QBT_CONFIGURE_TOUCH_FD 106
#define QBT_ACQUIRE_WAKELOCK 107
#define QBT_RELEASE_WAKELOCK 108
#define QBT_GET_TOUCH_FD_VERSION 109
#define QBT_CONFIGURE_TOUCH_FD_V2 110
#define QBT_INTR2_TEST 111
#define QBT_CONFIGURE_TOUCH_FD_V3 112
enum qbt_finger_events {
  QBT_EVENT_FINGER_UP,
  QBT_EVENT_FINGER_DOWN,
  QBT_EVENT_FINGER_MOVE
};
enum qbt_fw_event {
  FW_EVENT_FINGER_DOWN = 1,
  FW_EVENT_FINGER_UP = 2,
  FW_EVENT_IPC = 3,
};
struct qbt_wuhb_connected_status {
  _Bool is_wuhb_connected;
};
struct qbt_key_event {
  int key;
  int value;
};
struct qbt_touch_config {
  _Bool rad_filter_enable;
  int rad_x;
  int rad_y;
};
struct qbt_touch_fd_version {
  int version;
};
struct qbt_touch_config_v2 {
  struct qbt_touch_fd_version version;
  _Bool touch_fd_enable;
  _Bool rad_filter_enable;
  int left;
  int top;
  int right;
  int bottom;
  int rad_x;
  int rad_y;
};
struct qbt_touch_config_v3 {
  struct qbt_touch_fd_version version;
  _Bool touch_fd_enable;
  _Bool rad_filter_enable;
  int left;
  int top;
  int right;
  int bottom;
  int rad_x;
  int rad_y;
  _Bool intr2_enable;
};
struct qbt_intr2_test {
  __s32 state;
};
#endif
