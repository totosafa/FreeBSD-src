/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	Id: syscalls.master,v 1.8 1997/04/09 15:44:46 bde Exp 
 */

#include "opt_compat.h"

#include <sys/param.h>
#include <sys/sysent.h>
#include <sys/sysproto.h>
#include <i386/ibcs2/ibcs2_types.h>
#include <i386/ibcs2/ibcs2_signal.h>
#include <i386/ibcs2/ibcs2_proto.h>

#ifdef COMPAT_43
#define compat(n, name) n, (sy_call_t *)__CONCAT(o,name)
#else
#define compat(n, name) 0, (sy_call_t *)nosys
#endif

/* The casts are bogus but will do for now. */
struct sysent ibcs2_sysent[] = {
	{ 0, (sy_call_t *)nosys },			/* 0 = syscall */
	{ 1, (sy_call_t *)exit },			/* 1 = exit */
	{ 0, (sy_call_t *)fork },			/* 2 = fork */
	{ 3, (sy_call_t *)ibcs2_read },			/* 3 = ibcs2_read */
	{ 3, (sy_call_t *)write },			/* 4 = write */
	{ 3, (sy_call_t *)ibcs2_open },			/* 5 = ibcs2_open */
	{ 1, (sy_call_t *)close },			/* 6 = close */
	{ 3, (sy_call_t *)ibcs2_wait },			/* 7 = ibcs2_wait */
	{ 2, (sy_call_t *)ibcs2_creat },		/* 8 = ibcs2_creat */
	{ 2, (sy_call_t *)link },			/* 9 = link */
	{ 1, (sy_call_t *)ibcs2_unlink },		/* 10 = ibcs2_unlink */
	{ 2, (sy_call_t *)ibcs2_execv },		/* 11 = ibcs2_execv */
	{ 1, (sy_call_t *)ibcs2_chdir },		/* 12 = ibcs2_chdir */
	{ 1, (sy_call_t *)ibcs2_time },			/* 13 = ibcs2_time */
	{ 3, (sy_call_t *)ibcs2_mknod },		/* 14 = ibcs2_mknod */
	{ 2, (sy_call_t *)ibcs2_chmod },		/* 15 = ibcs2_chmod */
	{ 3, (sy_call_t *)ibcs2_chown },		/* 16 = ibcs2_chown */
	{ 1, (sy_call_t *)obreak },			/* 17 = obreak */
	{ 2, (sy_call_t *)ibcs2_stat },			/* 18 = ibcs2_stat */
	{ 3, (sy_call_t *)ibcs2_lseek },		/* 19 = ibcs2_lseek */
	{ 0, (sy_call_t *)getpid },			/* 20 = getpid */
	{ 6, (sy_call_t *)ibcs2_mount },		/* 21 = ibcs2_mount */
	{ 1, (sy_call_t *)ibcs2_umount },		/* 22 = ibcs2_umount */
	{ 1, (sy_call_t *)ibcs2_setuid },		/* 23 = ibcs2_setuid */
	{ 0, (sy_call_t *)getuid },			/* 24 = getuid */
	{ 1, (sy_call_t *)ibcs2_stime },		/* 25 = ibcs2_stime */
	{ 4, (sy_call_t *)ptrace },			/* 26 = ptrace */
	{ 1, (sy_call_t *)ibcs2_alarm },		/* 27 = ibcs2_alarm */
	{ 2, (sy_call_t *)ibcs2_fstat },		/* 28 = ibcs2_fstat */
	{ 0, (sy_call_t *)ibcs2_pause },		/* 29 = ibcs2_pause */
	{ 2, (sy_call_t *)ibcs2_utime },		/* 30 = ibcs2_utime */
	{ 2, (sy_call_t *)ibcs2_stty },			/* 31 = ibcs2_stty */
	{ 2, (sy_call_t *)ibcs2_gtty },			/* 32 = ibcs2_gtty */
	{ 2, (sy_call_t *)ibcs2_access },		/* 33 = ibcs2_access */
	{ 1, (sy_call_t *)ibcs2_nice },			/* 34 = ibcs2_nice */
	{ 4, (sy_call_t *)ibcs2_statfs },		/* 35 = ibcs2_statfs */
	{ 0, (sy_call_t *)sync },			/* 36 = sync */
	{ 2, (sy_call_t *)ibcs2_kill },			/* 37 = ibcs2_kill */
	{ 4, (sy_call_t *)ibcs2_fstatfs },		/* 38 = ibcs2_fstatfs */
	{ 4, (sy_call_t *)ibcs2_pgrpsys },		/* 39 = ibcs2_pgrpsys */
	{ 5, (sy_call_t *)ibcs2_xenix },		/* 40 = ibcs2_xenix */
	{ 1, (sy_call_t *)dup },			/* 41 = dup */
	{ 0, (sy_call_t *)pipe },			/* 42 = pipe */
	{ 1, (sy_call_t *)ibcs2_times },		/* 43 = ibcs2_times */
	{ 4, (sy_call_t *)profil },			/* 44 = profil */
	{ 1, (sy_call_t *)ibcs2_plock },		/* 45 = ibcs2_plock */
	{ 1, (sy_call_t *)ibcs2_setgid },		/* 46 = ibcs2_setgid */
	{ 0, (sy_call_t *)getgid },			/* 47 = getgid */
	{ 2, (sy_call_t *)ibcs2_sigsys },		/* 48 = ibcs2_sigsys */
	{ 6, (sy_call_t *)ibcs2_msgsys },		/* 49 = ibcs2_msgsys */
	{ 2, (sy_call_t *)ibcs2_sysi86 },		/* 50 = ibcs2_sysi86 */
	{ 0, (sy_call_t *)nosys },			/* 51 = ibcs2_acct */
	{ 4, (sy_call_t *)ibcs2_shmsys },		/* 52 = ibcs2_shmsys */
	{ 5, (sy_call_t *)ibcs2_semsys },		/* 53 = ibcs2_semsys */
	{ 3, (sy_call_t *)ibcs2_ioctl },		/* 54 = ibcs2_ioctl */
	{ 3, (sy_call_t *)ibcs2_uadmin },		/* 55 = ibcs2_uadmin */
	{ 0, (sy_call_t *)nosys },			/* 56 = nosys */
	{ 3, (sy_call_t *)ibcs2_utssys },		/* 57 = ibcs2_utssys */
	{ 1, (sy_call_t *)fsync },			/* 58 = fsync */
	{ 3, (sy_call_t *)ibcs2_execve },		/* 59 = ibcs2_execve */
	{ 1, (sy_call_t *)umask },			/* 60 = umask */
	{ 1, (sy_call_t *)chroot },			/* 61 = chroot */
	{ 3, (sy_call_t *)ibcs2_fcntl },		/* 62 = ibcs2_fcntl */
	{ 2, (sy_call_t *)ibcs2_ulimit },		/* 63 = ibcs2_ulimit */
	{ 0, (sy_call_t *)nosys },			/* 64 = reserved for unix/pc */
	{ 0, (sy_call_t *)nosys },			/* 65 = reserved for unix/pc */
	{ 0, (sy_call_t *)nosys },			/* 66 = reserved for unix/pc */
	{ 0, (sy_call_t *)nosys },			/* 67 = reserved for unix/pc */
	{ 0, (sy_call_t *)nosys },			/* 68 = reserved for unix/pc */
	{ 0, (sy_call_t *)nosys },			/* 69 = reserved for unix/pc */
	{ 0, (sy_call_t *)nosys },			/* 70 = obsolete rfs_advfs */
	{ 0, (sy_call_t *)nosys },			/* 71 = obsolete rfs_unadvfs */
	{ 0, (sy_call_t *)nosys },			/* 72 = obsolete rfs_rmount */
	{ 0, (sy_call_t *)nosys },			/* 73 = obsolete rfs_rumount */
	{ 0, (sy_call_t *)nosys },			/* 74 = obsolete rfs_rfstart */
	{ 0, (sy_call_t *)nosys },			/* 75 = obsolete rfs_sigret */
	{ 0, (sy_call_t *)nosys },			/* 76 = obsolete rfs_rdebug */
	{ 0, (sy_call_t *)nosys },			/* 77 = obsolete rfs_rfstop */
	{ 0, (sy_call_t *)nosys },			/* 78 = rfs_rfsys */
	{ 1, (sy_call_t *)ibcs2_rmdir },		/* 79 = ibcs2_rmdir */
	{ 2, (sy_call_t *)ibcs2_mkdir },		/* 80 = ibcs2_mkdir */
	{ 3, (sy_call_t *)ibcs2_getdents },		/* 81 = ibcs2_getdents */
	{ 0, (sy_call_t *)nosys },			/* 82 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 83 = nosys */
	{ 3, (sy_call_t *)ibcs2_sysfs },		/* 84 = ibcs2_sysfs */
	{ 4, (sy_call_t *)ibcs2_getmsg },		/* 85 = ibcs2_getmsg */
	{ 4, (sy_call_t *)ibcs2_putmsg },		/* 86 = ibcs2_putmsg */
	{ 3, (sy_call_t *)ibcs2_poll },			/* 87 = ibcs2_poll */
	{ 0, (sy_call_t *)nosys },			/* 88 = nosys */
	{ 6, (sy_call_t *)ibcs2_secure },		/* 89 = ibcs2_secure */
	{ 2, (sy_call_t *)ibcs2_symlink },		/* 90 = ibcs2_symlink */
	{ 2, (sy_call_t *)ibcs2_lstat },		/* 91 = ibcs2_lstat */
	{ 3, (sy_call_t *)ibcs2_readlink },		/* 92 = ibcs2_readlink */
	{ 0, (sy_call_t *)nosys },			/* 93 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 94 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 95 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 96 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 97 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 98 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 99 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 100 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 101 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 102 = nosys */
	{ 1, (sy_call_t *)sigreturn },			/* 103 = sigreturn */
	{ 0, (sy_call_t *)nosys },			/* 104 = nosys */
	{ 0, (sy_call_t *)ibcs2_isc },			/* 105 = ibcs2_isc */
	{ 0, (sy_call_t *)nosys },			/* 106 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 107 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 108 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 109 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 110 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 111 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 112 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 113 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 114 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 115 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 116 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 117 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 118 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 119 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 120 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 121 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 122 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 123 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 124 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 125 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 126 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 127 = nosys */
};
