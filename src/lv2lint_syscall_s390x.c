/*
 * SPDX-FileCopyrightText: Hanspeter Portner <dev@open-music-kontrollers.ch>
 * SPDX-License-Identifier: Artistic-2.0
 */

#include <lv2lint/lv2lint_syscall.h>

const int syscall_ids [SYSCALL_MAX] = {
	[SYSCALL__llseek] = -1,
	[SYSCALL__newselect] = -1,
	[SYSCALL__sysctl] = 149,
	[SYSCALL_accept] = -1,
	[SYSCALL_accept4] = 364,
	[SYSCALL_access] = 33,
	[SYSCALL_acct] = 51,
	[SYSCALL_add_key] = 278,
	[SYSCALL_adjtimex] = 124,
	[SYSCALL_alarm] = 27,
	[SYSCALL_arc_gettls] = -1,
	[SYSCALL_arc_settls] = -1,
	[SYSCALL_arc_usr_cmpxchg] = -1,
	[SYSCALL_arch_prctl] = -1,
	[SYSCALL_arm_fadvise64_64] = -1,
	[SYSCALL_atomic_barrier] = -1,
	[SYSCALL_atomic_cmpxchg_32] = -1,
	[SYSCALL_bdflush] = 134,
	[SYSCALL_bind] = 361,
	[SYSCALL_bpf] = 351,
	[SYSCALL_brk] = 45,
	[SYSCALL_cachectl] = -1,
	[SYSCALL_cacheflush] = -1,
	[SYSCALL_capget] = 184,
	[SYSCALL_capset] = 185,
	[SYSCALL_chdir] = 12,
	[SYSCALL_chmod] = 15,
	[SYSCALL_chown] = 212,
	[SYSCALL_chown32] = -1,
	[SYSCALL_chroot] = 61,
	[SYSCALL_clock_adjtime] = 337,
	[SYSCALL_clock_adjtime64] = -1,
	[SYSCALL_clock_getres] = 261,
	[SYSCALL_clock_getres_time64] = -1,
	[SYSCALL_clock_gettime] = 260,
	[SYSCALL_clock_gettime64] = -1,
	[SYSCALL_clock_nanosleep] = 262,
	[SYSCALL_clock_nanosleep_time64] = -1,
	[SYSCALL_clock_settime] = 259,
	[SYSCALL_clock_settime64] = -1,
	[SYSCALL_clone] = 120,
	[SYSCALL_clone2] = -1,
	[SYSCALL_clone3] = 435,
	[SYSCALL_close] = 6,
	[SYSCALL_close_range] = 436,
	[SYSCALL_connect] = 362,
	[SYSCALL_copy_file_range] = 375,
	[SYSCALL_creat] = 8,
	[SYSCALL_create_module] = 127,
	[SYSCALL_delete_module] = 129,
	[SYSCALL_dipc] = -1,
	[SYSCALL_dup] = 41,
	[SYSCALL_dup2] = 63,
	[SYSCALL_dup3] = 326,
	[SYSCALL_epoll_create] = 249,
	[SYSCALL_epoll_create1] = 327,
	[SYSCALL_epoll_ctl] = 250,
	[SYSCALL_epoll_ctl_old] = -1,
	[SYSCALL_epoll_pwait] = 312,
	[SYSCALL_epoll_pwait2] = 441,
	[SYSCALL_epoll_wait] = 251,
	[SYSCALL_epoll_wait_old] = -1,
	[SYSCALL_eventfd] = 318,
	[SYSCALL_eventfd2] = 323,
	[SYSCALL_exec_with_loader] = -1,
	[SYSCALL_execv] = -1,
	[SYSCALL_execve] = 11,
	[SYSCALL_execveat] = 354,
	[SYSCALL_exit] = 1,
	[SYSCALL_exit_group] = 248,
	[SYSCALL_faccessat] = 300,
	[SYSCALL_faccessat2] = 439,
	[SYSCALL_fadvise64] = 253,
	[SYSCALL_fadvise64_64] = -1,
	[SYSCALL_fallocate] = 314,
	[SYSCALL_fanotify_init] = 332,
	[SYSCALL_fanotify_mark] = 333,
	[SYSCALL_fchdir] = 133,
	[SYSCALL_fchmod] = 94,
	[SYSCALL_fchmodat] = 299,
	[SYSCALL_fchown] = 207,
	[SYSCALL_fchown32] = -1,
	[SYSCALL_fchownat] = 291,
	[SYSCALL_fcntl] = 55,
	[SYSCALL_fcntl64] = -1,
	[SYSCALL_fdatasync] = 148,
	[SYSCALL_fgetxattr] = 229,
	[SYSCALL_finit_module] = 344,
	[SYSCALL_flistxattr] = 232,
	[SYSCALL_flock] = 143,
	[SYSCALL_fork] = 2,
	[SYSCALL_fp_udfiex_crtl] = -1,
	[SYSCALL_fremovexattr] = 235,
	[SYSCALL_fsconfig] = 431,
	[SYSCALL_fsetxattr] = 226,
	[SYSCALL_fsmount] = 432,
	[SYSCALL_fsopen] = 430,
	[SYSCALL_fspick] = 433,
	[SYSCALL_fstat] = 108,
	[SYSCALL_fstat64] = -1,
	[SYSCALL_fstatat64] = -1,
	[SYSCALL_fstatfs] = 100,
	[SYSCALL_fstatfs64] = 266,
	[SYSCALL_fsync] = 118,
	[SYSCALL_ftruncate] = 93,
	[SYSCALL_ftruncate64] = -1,
	[SYSCALL_futex] = 238,
	[SYSCALL_futex_time64] = -1,
	[SYSCALL_futex_waitv] = 449,
	[SYSCALL_futimesat] = 292,
	[SYSCALL_get_kernel_syms] = 130,
	[SYSCALL_get_mempolicy] = 269,
	[SYSCALL_get_robust_list] = 305,
	[SYSCALL_get_thread_area] = -1,
	[SYSCALL_getcpu] = 311,
	[SYSCALL_getcwd] = 183,
	[SYSCALL_getdents] = 141,
	[SYSCALL_getdents64] = 220,
	[SYSCALL_getdomainname] = -1,
	[SYSCALL_getdtablesize] = -1,
	[SYSCALL_getegid] = 202,
	[SYSCALL_getegid32] = -1,
	[SYSCALL_geteuid] = 201,
	[SYSCALL_geteuid32] = -1,
	[SYSCALL_getgid] = 200,
	[SYSCALL_getgid32] = -1,
	[SYSCALL_getgroups] = 205,
	[SYSCALL_getgroups32] = -1,
	[SYSCALL_gethostname] = -1,
	[SYSCALL_getitimer] = 105,
	[SYSCALL_getpagesize] = -1,
	[SYSCALL_getpeername] = 368,
	[SYSCALL_getpgid] = 132,
	[SYSCALL_getpgrp] = 65,
	[SYSCALL_getpid] = 20,
	[SYSCALL_getpmsg] = 188,
	[SYSCALL_getppid] = 64,
	[SYSCALL_getpriority] = 96,
	[SYSCALL_getrandom] = 349,
	[SYSCALL_getresgid] = 211,
	[SYSCALL_getresgid32] = -1,
	[SYSCALL_getresuid] = 209,
	[SYSCALL_getresuid32] = -1,
	[SYSCALL_getrlimit] = 191,
	[SYSCALL_getrusage] = 77,
	[SYSCALL_getsid] = 147,
	[SYSCALL_getsockname] = 367,
	[SYSCALL_getsockopt] = 365,
	[SYSCALL_gettid] = 236,
	[SYSCALL_gettimeofday] = 78,
	[SYSCALL_getuid] = 199,
	[SYSCALL_getuid32] = -1,
	[SYSCALL_getunwind] = -1,
	[SYSCALL_getxattr] = 227,
	[SYSCALL_getxgid] = -1,
	[SYSCALL_getxpid] = -1,
	[SYSCALL_getxuid] = -1,
	[SYSCALL_idle] = 112,
	[SYSCALL_init_module] = 128,
	[SYSCALL_inotify_add_watch] = 285,
	[SYSCALL_inotify_init] = 284,
	[SYSCALL_inotify_init1] = 324,
	[SYSCALL_inotify_rm_watch] = 286,
	[SYSCALL_io_cancel] = 247,
	[SYSCALL_io_destroy] = 244,
	[SYSCALL_io_getevents] = 245,
	[SYSCALL_io_pgetevents] = 382,
	[SYSCALL_io_pgetevents_time64] = -1,
	[SYSCALL_io_setup] = 243,
	[SYSCALL_io_submit] = 246,
	[SYSCALL_io_uring_enter] = 426,
	[SYSCALL_io_uring_register] = 427,
	[SYSCALL_io_uring_setup] = 425,
	[SYSCALL_ioctl] = 54,
	[SYSCALL_ioperm] = -1,
	[SYSCALL_iopl] = -1,
	[SYSCALL_ioprio_get] = 283,
	[SYSCALL_ioprio_set] = 282,
	[SYSCALL_ipc] = 117,
	[SYSCALL_kcmp] = 343,
	[SYSCALL_kern_features] = -1,
	[SYSCALL_kexec_file_load] = 381,
	[SYSCALL_kexec_load] = 277,
	[SYSCALL_keyctl] = 280,
	[SYSCALL_kill] = 37,
	[SYSCALL_landlock_add_rule] = 445,
	[SYSCALL_landlock_create_ruleset] = 444,
	[SYSCALL_landlock_restrict_self] = 446,
	[SYSCALL_lchown] = 198,
	[SYSCALL_lchown32] = -1,
	[SYSCALL_lgetxattr] = 228,
	[SYSCALL_link] = 9,
	[SYSCALL_linkat] = 296,
	[SYSCALL_listen] = 363,
	[SYSCALL_listxattr] = 230,
	[SYSCALL_llistxattr] = 231,
	[SYSCALL_lookup_dcookie] = 110,
	[SYSCALL_lremovexattr] = 234,
	[SYSCALL_lseek] = 19,
	[SYSCALL_lsetxattr] = 225,
	[SYSCALL_lstat] = 107,
	[SYSCALL_lstat64] = -1,
	[SYSCALL_madvise] = 219,
	[SYSCALL_mbind] = 268,
	[SYSCALL_membarrier] = 356,
	[SYSCALL_memfd_create] = 350,
	[SYSCALL_memfd_secret] = -1,
	[SYSCALL_memory_ordering] = -1,
	[SYSCALL_migrate_pages] = 287,
	[SYSCALL_mincore] = 218,
	[SYSCALL_mkdir] = 39,
	[SYSCALL_mkdirat] = 289,
	[SYSCALL_mknod] = 14,
	[SYSCALL_mknodat] = 290,
	[SYSCALL_mlock] = 150,
	[SYSCALL_mlock2] = 374,
	[SYSCALL_mlockall] = 152,
	[SYSCALL_mmap] = 90,
	[SYSCALL_mmap2] = -1,
	[SYSCALL_modify_ldt] = -1,
	[SYSCALL_mount] = 21,
	[SYSCALL_mount_setattr] = 442,
	[SYSCALL_move_mount] = 429,
	[SYSCALL_move_pages] = 310,
	[SYSCALL_mprotect] = 125,
	[SYSCALL_mq_getsetattr] = 276,
	[SYSCALL_mq_notify] = 275,
	[SYSCALL_mq_open] = 271,
	[SYSCALL_mq_timedreceive] = 274,
	[SYSCALL_mq_timedreceive_time64] = -1,
	[SYSCALL_mq_timedsend] = 273,
	[SYSCALL_mq_timedsend_time64] = -1,
	[SYSCALL_mq_unlink] = 272,
	[SYSCALL_mremap] = 163,
	[SYSCALL_msgctl] = 402,
	[SYSCALL_msgget] = 399,
	[SYSCALL_msgrcv] = 401,
	[SYSCALL_msgsnd] = 400,
	[SYSCALL_msync] = 144,
	[SYSCALL_multiplexer] = -1,
	[SYSCALL_munlock] = 151,
	[SYSCALL_munlockall] = 153,
	[SYSCALL_munmap] = 91,
	[SYSCALL_name_to_handle_at] = 335,
	[SYSCALL_nanosleep] = 162,
	[SYSCALL_newfstatat] = 293,
	[SYSCALL_nfsservctl] = 169,
	[SYSCALL_nice] = 34,
	[SYSCALL_old_adjtimex] = -1,
	[SYSCALL_old_getpagesize] = -1,
	[SYSCALL_oldfstat] = -1,
	[SYSCALL_oldlstat] = -1,
	[SYSCALL_oldolduname] = -1,
	[SYSCALL_oldstat] = -1,
	[SYSCALL_oldumount] = -1,
	[SYSCALL_olduname] = -1,
	[SYSCALL_open] = 5,
	[SYSCALL_open_by_handle_at] = 336,
	[SYSCALL_open_tree] = 428,
	[SYSCALL_openat] = 288,
	[SYSCALL_openat2] = 437,
	[SYSCALL_or1k_atomic] = -1,
	[SYSCALL_osf_adjtime] = -1,
	[SYSCALL_osf_afs_syscall] = -1,
	[SYSCALL_osf_alt_plock] = -1,
	[SYSCALL_osf_alt_setsid] = -1,
	[SYSCALL_osf_alt_sigpending] = -1,
	[SYSCALL_osf_asynch_daemon] = -1,
	[SYSCALL_osf_audcntl] = -1,
	[SYSCALL_osf_audgen] = -1,
	[SYSCALL_osf_chflags] = -1,
	[SYSCALL_osf_execve] = -1,
	[SYSCALL_osf_exportfs] = -1,
	[SYSCALL_osf_fchflags] = -1,
	[SYSCALL_osf_fdatasync] = -1,
	[SYSCALL_osf_fpathconf] = -1,
	[SYSCALL_osf_fstat] = -1,
	[SYSCALL_osf_fstatfs] = -1,
	[SYSCALL_osf_fstatfs64] = -1,
	[SYSCALL_osf_fuser] = -1,
	[SYSCALL_osf_getaddressconf] = -1,
	[SYSCALL_osf_getdirentries] = -1,
	[SYSCALL_osf_getdomainname] = -1,
	[SYSCALL_osf_getfh] = -1,
	[SYSCALL_osf_getfsstat] = -1,
	[SYSCALL_osf_gethostid] = -1,
	[SYSCALL_osf_getitimer] = -1,
	[SYSCALL_osf_getlogin] = -1,
	[SYSCALL_osf_getmnt] = -1,
	[SYSCALL_osf_getrusage] = -1,
	[SYSCALL_osf_getsysinfo] = -1,
	[SYSCALL_osf_gettimeofday] = -1,
	[SYSCALL_osf_kloadcall] = -1,
	[SYSCALL_osf_kmodcall] = -1,
	[SYSCALL_osf_lstat] = -1,
	[SYSCALL_osf_memcntl] = -1,
	[SYSCALL_osf_mincore] = -1,
	[SYSCALL_osf_mount] = -1,
	[SYSCALL_osf_mremap] = -1,
	[SYSCALL_osf_msfs_syscall] = -1,
	[SYSCALL_osf_msleep] = -1,
	[SYSCALL_osf_mvalid] = -1,
	[SYSCALL_osf_mwakeup] = -1,
	[SYSCALL_osf_naccept] = -1,
	[SYSCALL_osf_nfssvc] = -1,
	[SYSCALL_osf_ngetpeername] = -1,
	[SYSCALL_osf_ngetsockname] = -1,
	[SYSCALL_osf_nrecvfrom] = -1,
	[SYSCALL_osf_nrecvmsg] = -1,
	[SYSCALL_osf_nsendmsg] = -1,
	[SYSCALL_osf_ntp_adjtime] = -1,
	[SYSCALL_osf_ntp_gettime] = -1,
	[SYSCALL_osf_old_creat] = -1,
	[SYSCALL_osf_old_fstat] = -1,
	[SYSCALL_osf_old_getpgrp] = -1,
	[SYSCALL_osf_old_killpg] = -1,
	[SYSCALL_osf_old_lstat] = -1,
	[SYSCALL_osf_old_open] = -1,
	[SYSCALL_osf_old_sigaction] = -1,
	[SYSCALL_osf_old_sigblock] = -1,
	[SYSCALL_osf_old_sigreturn] = -1,
	[SYSCALL_osf_old_sigsetmask] = -1,
	[SYSCALL_osf_old_sigvec] = -1,
	[SYSCALL_osf_old_stat] = -1,
	[SYSCALL_osf_old_vadvise] = -1,
	[SYSCALL_osf_old_vtrace] = -1,
	[SYSCALL_osf_old_wait] = -1,
	[SYSCALL_osf_oldquota] = -1,
	[SYSCALL_osf_pathconf] = -1,
	[SYSCALL_osf_pid_block] = -1,
	[SYSCALL_osf_pid_unblock] = -1,
	[SYSCALL_osf_plock] = -1,
	[SYSCALL_osf_priocntlset] = -1,
	[SYSCALL_osf_profil] = -1,
	[SYSCALL_osf_proplist_syscall] = -1,
	[SYSCALL_osf_reboot] = -1,
	[SYSCALL_osf_revoke] = -1,
	[SYSCALL_osf_sbrk] = -1,
	[SYSCALL_osf_security] = -1,
	[SYSCALL_osf_select] = -1,
	[SYSCALL_osf_set_program_attributes] = -1,
	[SYSCALL_osf_set_speculative] = -1,
	[SYSCALL_osf_sethostid] = -1,
	[SYSCALL_osf_setitimer] = -1,
	[SYSCALL_osf_setlogin] = -1,
	[SYSCALL_osf_setsysinfo] = -1,
	[SYSCALL_osf_settimeofday] = -1,
	[SYSCALL_osf_shmat] = -1,
	[SYSCALL_osf_signal] = -1,
	[SYSCALL_osf_sigprocmask] = -1,
	[SYSCALL_osf_sigsendset] = -1,
	[SYSCALL_osf_sigstack] = -1,
	[SYSCALL_osf_sigwaitprim] = -1,
	[SYSCALL_osf_sstk] = -1,
	[SYSCALL_osf_stat] = -1,
	[SYSCALL_osf_statfs] = -1,
	[SYSCALL_osf_statfs64] = -1,
	[SYSCALL_osf_subsys_info] = -1,
	[SYSCALL_osf_swapctl] = -1,
	[SYSCALL_osf_swapon] = -1,
	[SYSCALL_osf_syscall] = -1,
	[SYSCALL_osf_sysinfo] = -1,
	[SYSCALL_osf_table] = -1,
	[SYSCALL_osf_uadmin] = -1,
	[SYSCALL_osf_usleep_thread] = -1,
	[SYSCALL_osf_uswitch] = -1,
	[SYSCALL_osf_utc_adjtime] = -1,
	[SYSCALL_osf_utc_gettime] = -1,
	[SYSCALL_osf_utimes] = -1,
	[SYSCALL_osf_utsname] = -1,
	[SYSCALL_osf_wait4] = -1,
	[SYSCALL_osf_waitid] = -1,
	[SYSCALL_pause] = 29,
	[SYSCALL_pciconfig_iobase] = -1,
	[SYSCALL_pciconfig_read] = -1,
	[SYSCALL_pciconfig_write] = -1,
	[SYSCALL_perf_event_open] = 331,
	[SYSCALL_perfctr] = -1,
	[SYSCALL_personality] = 136,
	[SYSCALL_pidfd_getfd] = 438,
	[SYSCALL_pidfd_open] = 434,
	[SYSCALL_pidfd_send_signal] = 424,
	[SYSCALL_pipe] = 42,
	[SYSCALL_pipe2] = 325,
	[SYSCALL_pivot_root] = 217,
	[SYSCALL_pkey_alloc] = 385,
	[SYSCALL_pkey_free] = 386,
	[SYSCALL_pkey_mprotect] = 384,
	[SYSCALL_poll] = 168,
	[SYSCALL_ppoll] = 302,
	[SYSCALL_ppoll_time64] = -1,
	[SYSCALL_prctl] = 172,
	[SYSCALL_pread64] = 180,
	[SYSCALL_preadv] = 328,
	[SYSCALL_preadv2] = 376,
	[SYSCALL_prlimit64] = 334,
	[SYSCALL_process_madvise] = 440,
	[SYSCALL_process_mrelease] = 448,
	[SYSCALL_process_vm_readv] = 340,
	[SYSCALL_process_vm_writev] = 341,
	[SYSCALL_pselect6] = 301,
	[SYSCALL_pselect6_time64] = -1,
	[SYSCALL_ptrace] = 26,
	[SYSCALL_pwrite64] = 181,
	[SYSCALL_pwritev] = 329,
	[SYSCALL_pwritev2] = 377,
	[SYSCALL_query_module] = 167,
	[SYSCALL_quotactl] = 131,
	[SYSCALL_quotactl_fd] = 443,
	[SYSCALL_read] = 3,
	[SYSCALL_readahead] = 222,
	[SYSCALL_readdir] = 89,
	[SYSCALL_readlink] = 85,
	[SYSCALL_readlinkat] = 298,
	[SYSCALL_readv] = 145,
	[SYSCALL_reboot] = 88,
	[SYSCALL_recv] = -1,
	[SYSCALL_recvfrom] = 371,
	[SYSCALL_recvmmsg] = 357,
	[SYSCALL_recvmmsg_time64] = -1,
	[SYSCALL_recvmsg] = 372,
	[SYSCALL_remap_file_pages] = 267,
	[SYSCALL_removexattr] = 233,
	[SYSCALL_rename] = 38,
	[SYSCALL_renameat] = 295,
	[SYSCALL_renameat2] = 347,
	[SYSCALL_request_key] = 279,
	[SYSCALL_restart_syscall] = 7,
	[SYSCALL_riscv_flush_icache] = -1,
	[SYSCALL_rmdir] = 40,
	[SYSCALL_rseq] = 383,
	[SYSCALL_rt_sigaction] = 174,
	[SYSCALL_rt_sigpending] = 176,
	[SYSCALL_rt_sigprocmask] = 175,
	[SYSCALL_rt_sigqueueinfo] = 178,
	[SYSCALL_rt_sigreturn] = 173,
	[SYSCALL_rt_sigsuspend] = 179,
	[SYSCALL_rt_sigtimedwait] = 177,
	[SYSCALL_rt_sigtimedwait_time64] = -1,
	[SYSCALL_rt_tgsigqueueinfo] = 330,
	[SYSCALL_rtas] = -1,
	[SYSCALL_s390_guarded_storage] = 378,
	[SYSCALL_s390_pci_mmio_read] = 353,
	[SYSCALL_s390_pci_mmio_write] = 352,
	[SYSCALL_s390_runtime_instr] = 342,
	[SYSCALL_s390_sthyi] = 380,
	[SYSCALL_sched_get_affinity] = -1,
	[SYSCALL_sched_get_priority_max] = 159,
	[SYSCALL_sched_get_priority_min] = 160,
	[SYSCALL_sched_getaffinity] = 240,
	[SYSCALL_sched_getattr] = 346,
	[SYSCALL_sched_getparam] = 155,
	[SYSCALL_sched_getscheduler] = 157,
	[SYSCALL_sched_rr_get_interval] = 161,
	[SYSCALL_sched_rr_get_interval_time64] = -1,
	[SYSCALL_sched_set_affinity] = -1,
	[SYSCALL_sched_setaffinity] = 239,
	[SYSCALL_sched_setattr] = 345,
	[SYSCALL_sched_setparam] = 154,
	[SYSCALL_sched_setscheduler] = 156,
	[SYSCALL_sched_yield] = 158,
	[SYSCALL_seccomp] = 348,
	[SYSCALL_select] = 142,
	[SYSCALL_semctl] = 394,
	[SYSCALL_semget] = 393,
	[SYSCALL_semop] = -1,
	[SYSCALL_semtimedop] = 392,
	[SYSCALL_semtimedop_time64] = -1,
	[SYSCALL_send] = -1,
	[SYSCALL_sendfile] = 187,
	[SYSCALL_sendfile64] = -1,
	[SYSCALL_sendmmsg] = 358,
	[SYSCALL_sendmsg] = 370,
	[SYSCALL_sendto] = 369,
	[SYSCALL_set_mempolicy] = 270,
	[SYSCALL_set_mempolicy_home_node] = 450,
	[SYSCALL_set_robust_list] = 304,
	[SYSCALL_set_thread_area] = -1,
	[SYSCALL_set_tid_address] = 252,
	[SYSCALL_setdomainname] = 121,
	[SYSCALL_setfsgid] = 216,
	[SYSCALL_setfsgid32] = -1,
	[SYSCALL_setfsuid] = 215,
	[SYSCALL_setfsuid32] = -1,
	[SYSCALL_setgid] = 214,
	[SYSCALL_setgid32] = -1,
	[SYSCALL_setgroups] = 206,
	[SYSCALL_setgroups32] = -1,
	[SYSCALL_sethae] = -1,
	[SYSCALL_sethostname] = 74,
	[SYSCALL_setitimer] = 104,
	[SYSCALL_setns] = 339,
	[SYSCALL_setpgid] = 57,
	[SYSCALL_setpgrp] = -1,
	[SYSCALL_setpriority] = 97,
	[SYSCALL_setregid] = 204,
	[SYSCALL_setregid32] = -1,
	[SYSCALL_setresgid] = 210,
	[SYSCALL_setresgid32] = -1,
	[SYSCALL_setresuid] = 208,
	[SYSCALL_setresuid32] = -1,
	[SYSCALL_setreuid] = 203,
	[SYSCALL_setreuid32] = -1,
	[SYSCALL_setrlimit] = 75,
	[SYSCALL_setsid] = 66,
	[SYSCALL_setsockopt] = 366,
	[SYSCALL_settimeofday] = 79,
	[SYSCALL_setuid] = 213,
	[SYSCALL_setuid32] = -1,
	[SYSCALL_setxattr] = 224,
	[SYSCALL_sgetmask] = -1,
	[SYSCALL_shmat] = 397,
	[SYSCALL_shmctl] = 396,
	[SYSCALL_shmdt] = 398,
	[SYSCALL_shmget] = 395,
	[SYSCALL_shutdown] = 373,
	[SYSCALL_sigaction] = 67,
	[SYSCALL_sigaltstack] = 186,
	[SYSCALL_signal] = 48,
	[SYSCALL_signalfd] = 316,
	[SYSCALL_signalfd4] = 322,
	[SYSCALL_sigpending] = 73,
	[SYSCALL_sigprocmask] = 126,
	[SYSCALL_sigreturn] = 119,
	[SYSCALL_sigsuspend] = 72,
	[SYSCALL_socket] = 359,
	[SYSCALL_socketcall] = 102,
	[SYSCALL_socketpair] = 360,
	[SYSCALL_splice] = 306,
	[SYSCALL_spu_create] = -1,
	[SYSCALL_spu_run] = -1,
	[SYSCALL_ssetmask] = -1,
	[SYSCALL_stat] = 106,
	[SYSCALL_stat64] = -1,
	[SYSCALL_statfs] = 99,
	[SYSCALL_statfs64] = 265,
	[SYSCALL_statx] = 379,
	[SYSCALL_stime] = -1,
	[SYSCALL_subpage_prot] = -1,
	[SYSCALL_swapcontext] = -1,
	[SYSCALL_swapoff] = 115,
	[SYSCALL_swapon] = 87,
	[SYSCALL_switch_endian] = -1,
	[SYSCALL_symlink] = 83,
	[SYSCALL_symlinkat] = 297,
	[SYSCALL_sync] = 36,
	[SYSCALL_sync_file_range] = 307,
	[SYSCALL_sync_file_range2] = -1,
	[SYSCALL_syncfs] = 338,
	[SYSCALL_sys_debug_setcontext] = -1,
	[SYSCALL_syscall] = -1,
	[SYSCALL_sysfs] = 135,
	[SYSCALL_sysinfo] = 116,
	[SYSCALL_syslog] = 103,
	[SYSCALL_sysmips] = -1,
	[SYSCALL_tee] = 308,
	[SYSCALL_tgkill] = 241,
	[SYSCALL_time] = -1,
	[SYSCALL_timer_create] = 254,
	[SYSCALL_timer_delete] = 258,
	[SYSCALL_timer_getoverrun] = 257,
	[SYSCALL_timer_gettime] = 256,
	[SYSCALL_timer_gettime64] = -1,
	[SYSCALL_timer_settime] = 255,
	[SYSCALL_timer_settime64] = -1,
	[SYSCALL_timerfd] = 317,
	[SYSCALL_timerfd_create] = 319,
	[SYSCALL_timerfd_gettime] = 321,
	[SYSCALL_timerfd_gettime64] = -1,
	[SYSCALL_timerfd_settime] = 320,
	[SYSCALL_timerfd_settime64] = -1,
	[SYSCALL_times] = 43,
	[SYSCALL_tkill] = 237,
	[SYSCALL_truncate] = 92,
	[SYSCALL_truncate64] = -1,
	[SYSCALL_ugetrlimit] = -1,
	[SYSCALL_umask] = 60,
	[SYSCALL_umount] = 22,
	[SYSCALL_umount2] = 52,
	[SYSCALL_uname] = 122,
	[SYSCALL_unlink] = 10,
	[SYSCALL_unlinkat] = 294,
	[SYSCALL_unshare] = 303,
	[SYSCALL_uselib] = 86,
	[SYSCALL_userfaultfd] = 355,
	[SYSCALL_ustat] = 62,
	[SYSCALL_utime] = 30,
	[SYSCALL_utimensat] = 315,
	[SYSCALL_utimensat_time64] = -1,
	[SYSCALL_utimes] = 313,
	[SYSCALL_utrap_install] = -1,
	[SYSCALL_vfork] = 190,
	[SYSCALL_vhangup] = 111,
	[SYSCALL_vm86] = -1,
	[SYSCALL_vm86old] = -1,
	[SYSCALL_vmsplice] = 309,
	[SYSCALL_wait4] = 114,
	[SYSCALL_waitid] = 281,
	[SYSCALL_waitpid] = -1,
	[SYSCALL_write] = 4,
	[SYSCALL_writev] = 146,
};
