/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_MSM_SYSSTATS_H_
#define _UAPI_MSM_SYSSTATS_H_
#include <linux/types.h>
#define SYSSTATS_GENL_NAME "SYSSTATS"
#define SYSSTATS_GENL_VERSION 0x2
#define TS_COMM_LEN 32
#define SYSSTATS_TYPE_UNSPEC 0
#define SYSSTATS_TASK_TYPE_STATS 1
#define SYSSTATS_TYPE_NULL 2
#define SYSSTATS_TASK_TYPE_FOREACH 3
#define SYSSTATS_MEMINFO_TYPE_STATS 4
#define SYSSTATS_PID_TYPE_STATS 5
#define SYSSTATS_CMD_ATTR_UNSPEC 0
#define SYSSTATS_TASK_CMD_ATTR_PID 1
#define SYSSTATS_TASK_CMD_ATTR_FOREACH 2
#define SYSSTATS_TASK_CMD_ATTR_PIDS_OF_NAME 3
#define SYSSTATS_CMD_UNSPEC 0
#define SYSSTATS_TASK_CMD_GET 1
#define SYSSTATS_TASK_CMD_NEW 2
#define SYSSTATS_MEMINFO_CMD_GET 3
#define SYSSTATS_MEMINFO_CMD_NEW 4
#define SYSSTATS_PIDS_CMD_GET 5
#define SYSSTATS_PIDS_CMD_NEW 6
struct sysstats_task {
  __u64 anon_rss;
  __u64 file_rss;
  __u64 swap_rss;
  __u64 shmem_rss;
  __u64 unreclaimable;
  __u64 utime;
  __u64 stime;
  __u64 cutime;
  __u64 cstime;
  __s16 oom_score;
  __s16 __padding;
  __u32 pid;
  __u32 uid;
  __u32 ppid;
  char name[TS_COMM_LEN];
  char state[TS_COMM_LEN];
};
struct sysstats_mem {
  __u64 memtotal;
  __u64 misc_reclaimable;
  __u64 unreclaimable;
  __u64 zram_compressed;
  __u64 swap_used;
  __u64 swap_total;
  __u64 buffer;
  __u64 vmalloc_total;
  __u64 swapcache;
  __u64 slab_reclaimable;
  __u64 slab_unreclaimable;
  __u64 free_cma;
  __u64 file_mapped;
  __u64 pagetable;
  __u64 kernelstack;
  __u64 shmem;
  __u64 dma_nr_free;
  __u64 dma_nr_active_anon;
  __u64 dma_nr_inactive_anon;
  __u64 dma_nr_active_file;
  __u64 dma_nr_inactive_file;
  __u64 normal_nr_free;
  __u64 normal_nr_active_anon;
  __u64 normal_nr_inactive_anon;
  __u64 normal_nr_active_file;
  __u64 normal_nr_inactive_file;
  __u64 movable_nr_free;
  __u64 movable_nr_active_anon;
  __u64 movable_nr_inactive_anon;
  __u64 movable_nr_active_file;
  __u64 movable_nr_inactive_file;
  __u64 highmem_nr_free;
  __u64 highmem_nr_active_anon;
  __u64 highmem_nr_inactive_anon;
  __u64 highmem_nr_active_file;
  __u64 highmem_nr_inactive_file;
};
struct sysstats_pid {
  __u64 pid;
};
#endif
