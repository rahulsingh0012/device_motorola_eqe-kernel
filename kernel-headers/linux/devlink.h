/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_DEVLINK_H_
#define _UAPI_LINUX_DEVLINK_H_
#include <linux/const.h>
#define DEVLINK_GENL_NAME "devlink"
#define DEVLINK_GENL_VERSION 0x1
#define DEVLINK_GENL_MCGRP_CONFIG_NAME "config"
enum devlink_command {
  DEVLINK_CMD_UNSPEC,
  DEVLINK_CMD_GET,
  DEVLINK_CMD_SET,
  DEVLINK_CMD_NEW,
  DEVLINK_CMD_DEL,
  DEVLINK_CMD_PORT_GET,
  DEVLINK_CMD_PORT_SET,
  DEVLINK_CMD_PORT_NEW,
  DEVLINK_CMD_PORT_DEL,
  DEVLINK_CMD_PORT_SPLIT,
  DEVLINK_CMD_PORT_UNSPLIT,
  DEVLINK_CMD_SB_GET,
  DEVLINK_CMD_SB_SET,
  DEVLINK_CMD_SB_NEW,
  DEVLINK_CMD_SB_DEL,
  DEVLINK_CMD_SB_POOL_GET,
  DEVLINK_CMD_SB_POOL_SET,
  DEVLINK_CMD_SB_POOL_NEW,
  DEVLINK_CMD_SB_POOL_DEL,
  DEVLINK_CMD_SB_PORT_POOL_GET,
  DEVLINK_CMD_SB_PORT_POOL_SET,
  DEVLINK_CMD_SB_PORT_POOL_NEW,
  DEVLINK_CMD_SB_PORT_POOL_DEL,
  DEVLINK_CMD_SB_TC_POOL_BIND_GET,
  DEVLINK_CMD_SB_TC_POOL_BIND_SET,
  DEVLINK_CMD_SB_TC_POOL_BIND_NEW,
  DEVLINK_CMD_SB_TC_POOL_BIND_DEL,
  DEVLINK_CMD_SB_OCC_SNAPSHOT,
  DEVLINK_CMD_SB_OCC_MAX_CLEAR,
  DEVLINK_CMD_ESWITCH_GET,
#define DEVLINK_CMD_ESWITCH_MODE_GET DEVLINK_CMD_ESWITCH_GET
  DEVLINK_CMD_ESWITCH_SET,
#define DEVLINK_CMD_ESWITCH_MODE_SET DEVLINK_CMD_ESWITCH_SET
  DEVLINK_CMD_DPIPE_TABLE_GET,
  DEVLINK_CMD_DPIPE_ENTRIES_GET,
  DEVLINK_CMD_DPIPE_HEADERS_GET,
  DEVLINK_CMD_DPIPE_TABLE_COUNTERS_SET,
  DEVLINK_CMD_RESOURCE_SET,
  DEVLINK_CMD_RESOURCE_DUMP,
  DEVLINK_CMD_RELOAD,
  DEVLINK_CMD_PARAM_GET,
  DEVLINK_CMD_PARAM_SET,
  DEVLINK_CMD_PARAM_NEW,
  DEVLINK_CMD_PARAM_DEL,
  DEVLINK_CMD_REGION_GET,
  DEVLINK_CMD_REGION_SET,
  DEVLINK_CMD_REGION_NEW,
  DEVLINK_CMD_REGION_DEL,
  DEVLINK_CMD_REGION_READ,
  DEVLINK_CMD_PORT_PARAM_GET,
  DEVLINK_CMD_PORT_PARAM_SET,
  DEVLINK_CMD_PORT_PARAM_NEW,
  DEVLINK_CMD_PORT_PARAM_DEL,
  DEVLINK_CMD_INFO_GET,
  DEVLINK_CMD_HEALTH_REPORTER_GET,
  DEVLINK_CMD_HEALTH_REPORTER_SET,
  DEVLINK_CMD_HEALTH_REPORTER_RECOVER,
  DEVLINK_CMD_HEALTH_REPORTER_DIAGNOSE,
  DEVLINK_CMD_HEALTH_REPORTER_DUMP_GET,
  DEVLINK_CMD_HEALTH_REPORTER_DUMP_CLEAR,
  DEVLINK_CMD_FLASH_UPDATE,
  DEVLINK_CMD_FLASH_UPDATE_END,
  DEVLINK_CMD_FLASH_UPDATE_STATUS,
  DEVLINK_CMD_TRAP_GET,
  DEVLINK_CMD_TRAP_SET,
  DEVLINK_CMD_TRAP_NEW,
  DEVLINK_CMD_TRAP_DEL,
  DEVLINK_CMD_TRAP_GROUP_GET,
  DEVLINK_CMD_TRAP_GROUP_SET,
  DEVLINK_CMD_TRAP_GROUP_NEW,
  DEVLINK_CMD_TRAP_GROUP_DEL,
  DEVLINK_CMD_TRAP_POLICER_GET,
  DEVLINK_CMD_TRAP_POLICER_SET,
  DEVLINK_CMD_TRAP_POLICER_NEW,
  DEVLINK_CMD_TRAP_POLICER_DEL,
  DEVLINK_CMD_HEALTH_REPORTER_TEST,
  __DEVLINK_CMD_MAX,
  DEVLINK_CMD_MAX = __DEVLINK_CMD_MAX - 1
};
enum devlink_port_type {
  DEVLINK_PORT_TYPE_NOTSET,
  DEVLINK_PORT_TYPE_AUTO,
  DEVLINK_PORT_TYPE_ETH,
  DEVLINK_PORT_TYPE_IB,
};
enum devlink_sb_pool_type {
  DEVLINK_SB_POOL_TYPE_INGRESS,
  DEVLINK_SB_POOL_TYPE_EGRESS,
};
enum devlink_sb_threshold_type {
  DEVLINK_SB_THRESHOLD_TYPE_STATIC,
  DEVLINK_SB_THRESHOLD_TYPE_DYNAMIC,
};
#define DEVLINK_SB_THRESHOLD_TO_ALPHA_MAX 20
enum devlink_eswitch_mode {
  DEVLINK_ESWITCH_MODE_LEGACY,
  DEVLINK_ESWITCH_MODE_SWITCHDEV,
};
enum devlink_eswitch_inline_mode {
  DEVLINK_ESWITCH_INLINE_MODE_NONE,
  DEVLINK_ESWITCH_INLINE_MODE_LINK,
  DEVLINK_ESWITCH_INLINE_MODE_NETWORK,
  DEVLINK_ESWITCH_INLINE_MODE_TRANSPORT,
};
enum devlink_eswitch_encap_mode {
  DEVLINK_ESWITCH_ENCAP_MODE_NONE,
  DEVLINK_ESWITCH_ENCAP_MODE_BASIC,
};
enum devlink_port_flavour {
  DEVLINK_PORT_FLAVOUR_PHYSICAL,
  DEVLINK_PORT_FLAVOUR_CPU,
  DEVLINK_PORT_FLAVOUR_DSA,
  DEVLINK_PORT_FLAVOUR_PCI_PF,
  DEVLINK_PORT_FLAVOUR_PCI_VF,
  DEVLINK_PORT_FLAVOUR_VIRTUAL,
  DEVLINK_PORT_FLAVOUR_UNUSED,
};
enum devlink_param_cmode {
  DEVLINK_PARAM_CMODE_RUNTIME,
  DEVLINK_PARAM_CMODE_DRIVERINIT,
  DEVLINK_PARAM_CMODE_PERMANENT,
  __DEVLINK_PARAM_CMODE_MAX,
  DEVLINK_PARAM_CMODE_MAX = __DEVLINK_PARAM_CMODE_MAX - 1
};
enum devlink_param_fw_load_policy_value {
  DEVLINK_PARAM_FW_LOAD_POLICY_VALUE_DRIVER,
  DEVLINK_PARAM_FW_LOAD_POLICY_VALUE_FLASH,
  DEVLINK_PARAM_FW_LOAD_POLICY_VALUE_DISK,
  DEVLINK_PARAM_FW_LOAD_POLICY_VALUE_UNKNOWN,
};
enum devlink_param_reset_dev_on_drv_probe_value {
  DEVLINK_PARAM_RESET_DEV_ON_DRV_PROBE_VALUE_UNKNOWN,
  DEVLINK_PARAM_RESET_DEV_ON_DRV_PROBE_VALUE_ALWAYS,
  DEVLINK_PARAM_RESET_DEV_ON_DRV_PROBE_VALUE_NEVER,
  DEVLINK_PARAM_RESET_DEV_ON_DRV_PROBE_VALUE_DISK,
};
enum {
  DEVLINK_ATTR_STATS_RX_PACKETS,
  DEVLINK_ATTR_STATS_RX_BYTES,
  DEVLINK_ATTR_STATS_RX_DROPPED,
  __DEVLINK_ATTR_STATS_MAX,
  DEVLINK_ATTR_STATS_MAX = __DEVLINK_ATTR_STATS_MAX - 1
};
enum {
  DEVLINK_FLASH_OVERWRITE_SETTINGS_BIT,
  DEVLINK_FLASH_OVERWRITE_IDENTIFIERS_BIT,
  __DEVLINK_FLASH_OVERWRITE_MAX_BIT,
  DEVLINK_FLASH_OVERWRITE_MAX_BIT = __DEVLINK_FLASH_OVERWRITE_MAX_BIT - 1
};
#define DEVLINK_FLASH_OVERWRITE_SETTINGS _BITUL(DEVLINK_FLASH_OVERWRITE_SETTINGS_BIT)
#define DEVLINK_FLASH_OVERWRITE_IDENTIFIERS _BITUL(DEVLINK_FLASH_OVERWRITE_IDENTIFIERS_BIT)
#define DEVLINK_SUPPORTED_FLASH_OVERWRITE_SECTIONS (_BITUL(__DEVLINK_FLASH_OVERWRITE_MAX_BIT) - 1)
enum devlink_trap_action {
  DEVLINK_TRAP_ACTION_DROP,
  DEVLINK_TRAP_ACTION_TRAP,
  DEVLINK_TRAP_ACTION_MIRROR,
};
enum devlink_trap_type {
  DEVLINK_TRAP_TYPE_DROP,
  DEVLINK_TRAP_TYPE_EXCEPTION,
  DEVLINK_TRAP_TYPE_CONTROL,
};
enum {
  DEVLINK_ATTR_TRAP_METADATA_TYPE_IN_PORT,
  DEVLINK_ATTR_TRAP_METADATA_TYPE_FA_COOKIE,
};
enum devlink_reload_action {
  DEVLINK_RELOAD_ACTION_UNSPEC,
  DEVLINK_RELOAD_ACTION_DRIVER_REINIT,
  DEVLINK_RELOAD_ACTION_FW_ACTIVATE,
  __DEVLINK_RELOAD_ACTION_MAX,
  DEVLINK_RELOAD_ACTION_MAX = __DEVLINK_RELOAD_ACTION_MAX - 1
};
enum devlink_reload_limit {
  DEVLINK_RELOAD_LIMIT_UNSPEC,
  DEVLINK_RELOAD_LIMIT_NO_RESET,
  __DEVLINK_RELOAD_LIMIT_MAX,
  DEVLINK_RELOAD_LIMIT_MAX = __DEVLINK_RELOAD_LIMIT_MAX - 1
};
#define DEVLINK_RELOAD_LIMITS_VALID_MASK (_BITUL(__DEVLINK_RELOAD_LIMIT_MAX) - 1)
enum devlink_attr {
  DEVLINK_ATTR_UNSPEC,
  DEVLINK_ATTR_BUS_NAME,
  DEVLINK_ATTR_DEV_NAME,
  DEVLINK_ATTR_PORT_INDEX,
  DEVLINK_ATTR_PORT_TYPE,
  DEVLINK_ATTR_PORT_DESIRED_TYPE,
  DEVLINK_ATTR_PORT_NETDEV_IFINDEX,
  DEVLINK_ATTR_PORT_NETDEV_NAME,
  DEVLINK_ATTR_PORT_IBDEV_NAME,
  DEVLINK_ATTR_PORT_SPLIT_COUNT,
  DEVLINK_ATTR_PORT_SPLIT_GROUP,
  DEVLINK_ATTR_SB_INDEX,
  DEVLINK_ATTR_SB_SIZE,
  DEVLINK_ATTR_SB_INGRESS_POOL_COUNT,
  DEVLINK_ATTR_SB_EGRESS_POOL_COUNT,
  DEVLINK_ATTR_SB_INGRESS_TC_COUNT,
  DEVLINK_ATTR_SB_EGRESS_TC_COUNT,
  DEVLINK_ATTR_SB_POOL_INDEX,
  DEVLINK_ATTR_SB_POOL_TYPE,
  DEVLINK_ATTR_SB_POOL_SIZE,
  DEVLINK_ATTR_SB_POOL_THRESHOLD_TYPE,
  DEVLINK_ATTR_SB_THRESHOLD,
  DEVLINK_ATTR_SB_TC_INDEX,
  DEVLINK_ATTR_SB_OCC_CUR,
  DEVLINK_ATTR_SB_OCC_MAX,
  DEVLINK_ATTR_ESWITCH_MODE,
  DEVLINK_ATTR_ESWITCH_INLINE_MODE,
  DEVLINK_ATTR_DPIPE_TABLES,
  DEVLINK_ATTR_DPIPE_TABLE,
  DEVLINK_ATTR_DPIPE_TABLE_NAME,
  DEVLINK_ATTR_DPIPE_TABLE_SIZE,
  DEVLINK_ATTR_DPIPE_TABLE_MATCHES,
  DEVLINK_ATTR_DPIPE_TABLE_ACTIONS,
  DEVLINK_ATTR_DPIPE_TABLE_COUNTERS_ENABLED,
  DEVLINK_ATTR_DPIPE_ENTRIES,
  DEVLINK_ATTR_DPIPE_ENTRY,
  DEVLINK_ATTR_DPIPE_ENTRY_INDEX,
  DEVLINK_ATTR_DPIPE_ENTRY_MATCH_VALUES,
  DEVLINK_ATTR_DPIPE_ENTRY_ACTION_VALUES,
  DEVLINK_ATTR_DPIPE_ENTRY_COUNTER,
  DEVLINK_ATTR_DPIPE_MATCH,
  DEVLINK_ATTR_DPIPE_MATCH_VALUE,
  DEVLINK_ATTR_DPIPE_MATCH_TYPE,
  DEVLINK_ATTR_DPIPE_ACTION,
  DEVLINK_ATTR_DPIPE_ACTION_VALUE,
  DEVLINK_ATTR_DPIPE_ACTION_TYPE,
  DEVLINK_ATTR_DPIPE_VALUE,
  DEVLINK_ATTR_DPIPE_VALUE_MASK,
  DEVLINK_ATTR_DPIPE_VALUE_MAPPING,
  DEVLINK_ATTR_DPIPE_HEADERS,
  DEVLINK_ATTR_DPIPE_HEADER,
  DEVLINK_ATTR_DPIPE_HEADER_NAME,
  DEVLINK_ATTR_DPIPE_HEADER_ID,
  DEVLINK_ATTR_DPIPE_HEADER_FIELDS,
  DEVLINK_ATTR_DPIPE_HEADER_GLOBAL,
  DEVLINK_ATTR_DPIPE_HEADER_INDEX,
  DEVLINK_ATTR_DPIPE_FIELD,
  DEVLINK_ATTR_DPIPE_FIELD_NAME,
  DEVLINK_ATTR_DPIPE_FIELD_ID,
  DEVLINK_ATTR_DPIPE_FIELD_BITWIDTH,
  DEVLINK_ATTR_DPIPE_FIELD_MAPPING_TYPE,
  DEVLINK_ATTR_PAD,
  DEVLINK_ATTR_ESWITCH_ENCAP_MODE,
  DEVLINK_ATTR_RESOURCE_LIST,
  DEVLINK_ATTR_RESOURCE,
  DEVLINK_ATTR_RESOURCE_NAME,
  DEVLINK_ATTR_RESOURCE_ID,
  DEVLINK_ATTR_RESOURCE_SIZE,
  DEVLINK_ATTR_RESOURCE_SIZE_NEW,
  DEVLINK_ATTR_RESOURCE_SIZE_VALID,
  DEVLINK_ATTR_RESOURCE_SIZE_MIN,
  DEVLINK_ATTR_RESOURCE_SIZE_MAX,
  DEVLINK_ATTR_RESOURCE_SIZE_GRAN,
  DEVLINK_ATTR_RESOURCE_UNIT,
  DEVLINK_ATTR_RESOURCE_OCC,
  DEVLINK_ATTR_DPIPE_TABLE_RESOURCE_ID,
  DEVLINK_ATTR_DPIPE_TABLE_RESOURCE_UNITS,
  DEVLINK_ATTR_PORT_FLAVOUR,
  DEVLINK_ATTR_PORT_NUMBER,
  DEVLINK_ATTR_PORT_SPLIT_SUBPORT_NUMBER,
  DEVLINK_ATTR_PARAM,
  DEVLINK_ATTR_PARAM_NAME,
  DEVLINK_ATTR_PARAM_GENERIC,
  DEVLINK_ATTR_PARAM_TYPE,
  DEVLINK_ATTR_PARAM_VALUES_LIST,
  DEVLINK_ATTR_PARAM_VALUE,
  DEVLINK_ATTR_PARAM_VALUE_DATA,
  DEVLINK_ATTR_PARAM_VALUE_CMODE,
  DEVLINK_ATTR_REGION_NAME,
  DEVLINK_ATTR_REGION_SIZE,
  DEVLINK_ATTR_REGION_SNAPSHOTS,
  DEVLINK_ATTR_REGION_SNAPSHOT,
  DEVLINK_ATTR_REGION_SNAPSHOT_ID,
  DEVLINK_ATTR_REGION_CHUNKS,
  DEVLINK_ATTR_REGION_CHUNK,
  DEVLINK_ATTR_REGION_CHUNK_DATA,
  DEVLINK_ATTR_REGION_CHUNK_ADDR,
  DEVLINK_ATTR_REGION_CHUNK_LEN,
  DEVLINK_ATTR_INFO_DRIVER_NAME,
  DEVLINK_ATTR_INFO_SERIAL_NUMBER,
  DEVLINK_ATTR_INFO_VERSION_FIXED,
  DEVLINK_ATTR_INFO_VERSION_RUNNING,
  DEVLINK_ATTR_INFO_VERSION_STORED,
  DEVLINK_ATTR_INFO_VERSION_NAME,
  DEVLINK_ATTR_INFO_VERSION_VALUE,
  DEVLINK_ATTR_SB_POOL_CELL_SIZE,
  DEVLINK_ATTR_FMSG,
  DEVLINK_ATTR_FMSG_OBJ_NEST_START,
  DEVLINK_ATTR_FMSG_PAIR_NEST_START,
  DEVLINK_ATTR_FMSG_ARR_NEST_START,
  DEVLINK_ATTR_FMSG_NEST_END,
  DEVLINK_ATTR_FMSG_OBJ_NAME,
  DEVLINK_ATTR_FMSG_OBJ_VALUE_TYPE,
  DEVLINK_ATTR_FMSG_OBJ_VALUE_DATA,
  DEVLINK_ATTR_HEALTH_REPORTER,
  DEVLINK_ATTR_HEALTH_REPORTER_NAME,
  DEVLINK_ATTR_HEALTH_REPORTER_STATE,
  DEVLINK_ATTR_HEALTH_REPORTER_ERR_COUNT,
  DEVLINK_ATTR_HEALTH_REPORTER_RECOVER_COUNT,
  DEVLINK_ATTR_HEALTH_REPORTER_DUMP_TS,
  DEVLINK_ATTR_HEALTH_REPORTER_GRACEFUL_PERIOD,
  DEVLINK_ATTR_HEALTH_REPORTER_AUTO_RECOVER,
  DEVLINK_ATTR_FLASH_UPDATE_FILE_NAME,
  DEVLINK_ATTR_FLASH_UPDATE_COMPONENT,
  DEVLINK_ATTR_FLASH_UPDATE_STATUS_MSG,
  DEVLINK_ATTR_FLASH_UPDATE_STATUS_DONE,
  DEVLINK_ATTR_FLASH_UPDATE_STATUS_TOTAL,
  DEVLINK_ATTR_PORT_PCI_PF_NUMBER,
  DEVLINK_ATTR_PORT_PCI_VF_NUMBER,
  DEVLINK_ATTR_STATS,
  DEVLINK_ATTR_TRAP_NAME,
  DEVLINK_ATTR_TRAP_ACTION,
  DEVLINK_ATTR_TRAP_TYPE,
  DEVLINK_ATTR_TRAP_GENERIC,
  DEVLINK_ATTR_TRAP_METADATA,
  DEVLINK_ATTR_TRAP_GROUP_NAME,
  DEVLINK_ATTR_RELOAD_FAILED,
  DEVLINK_ATTR_HEALTH_REPORTER_DUMP_TS_NS,
  DEVLINK_ATTR_NETNS_FD,
  DEVLINK_ATTR_NETNS_PID,
  DEVLINK_ATTR_NETNS_ID,
  DEVLINK_ATTR_HEALTH_REPORTER_AUTO_DUMP,
  DEVLINK_ATTR_TRAP_POLICER_ID,
  DEVLINK_ATTR_TRAP_POLICER_RATE,
  DEVLINK_ATTR_TRAP_POLICER_BURST,
  DEVLINK_ATTR_PORT_FUNCTION,
  DEVLINK_ATTR_INFO_BOARD_SERIAL_NUMBER,
  DEVLINK_ATTR_PORT_LANES,
  DEVLINK_ATTR_PORT_SPLITTABLE,
  DEVLINK_ATTR_PORT_EXTERNAL,
  DEVLINK_ATTR_PORT_CONTROLLER_NUMBER,
  DEVLINK_ATTR_FLASH_UPDATE_STATUS_TIMEOUT,
  DEVLINK_ATTR_FLASH_UPDATE_OVERWRITE_MASK,
  DEVLINK_ATTR_RELOAD_ACTION,
  DEVLINK_ATTR_RELOAD_ACTIONS_PERFORMED,
  DEVLINK_ATTR_RELOAD_LIMITS,
  DEVLINK_ATTR_DEV_STATS,
  DEVLINK_ATTR_RELOAD_STATS,
  DEVLINK_ATTR_RELOAD_STATS_ENTRY,
  DEVLINK_ATTR_RELOAD_STATS_LIMIT,
  DEVLINK_ATTR_RELOAD_STATS_VALUE,
  DEVLINK_ATTR_REMOTE_RELOAD_STATS,
  DEVLINK_ATTR_RELOAD_ACTION_INFO,
  DEVLINK_ATTR_RELOAD_ACTION_STATS,
  __DEVLINK_ATTR_MAX,
  DEVLINK_ATTR_MAX = __DEVLINK_ATTR_MAX - 1
};
enum devlink_dpipe_field_mapping_type {
  DEVLINK_DPIPE_FIELD_MAPPING_TYPE_NONE,
  DEVLINK_DPIPE_FIELD_MAPPING_TYPE_IFINDEX,
};
enum devlink_dpipe_match_type {
  DEVLINK_DPIPE_MATCH_TYPE_FIELD_EXACT,
};
enum devlink_dpipe_action_type {
  DEVLINK_DPIPE_ACTION_TYPE_FIELD_MODIFY,
};
enum devlink_dpipe_field_ethernet_id {
  DEVLINK_DPIPE_FIELD_ETHERNET_DST_MAC,
};
enum devlink_dpipe_field_ipv4_id {
  DEVLINK_DPIPE_FIELD_IPV4_DST_IP,
};
enum devlink_dpipe_field_ipv6_id {
  DEVLINK_DPIPE_FIELD_IPV6_DST_IP,
};
enum devlink_dpipe_header_id {
  DEVLINK_DPIPE_HEADER_ETHERNET,
  DEVLINK_DPIPE_HEADER_IPV4,
  DEVLINK_DPIPE_HEADER_IPV6,
};
enum devlink_resource_unit {
  DEVLINK_RESOURCE_UNIT_ENTRY,
};
enum devlink_port_function_attr {
  DEVLINK_PORT_FUNCTION_ATTR_UNSPEC,
  DEVLINK_PORT_FUNCTION_ATTR_HW_ADDR,
  __DEVLINK_PORT_FUNCTION_ATTR_MAX,
  DEVLINK_PORT_FUNCTION_ATTR_MAX = __DEVLINK_PORT_FUNCTION_ATTR_MAX - 1
};
#endif
