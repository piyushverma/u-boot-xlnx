
#ifndef __CONFIG_ZYNQ_ZC70X_H
#define __CONFIG_ZYNQ_ZC70X_H

#define CONFIG_EXTRA_ENV_SETTINGS       \
	"bootcmd=run sdboot\0"		\
	"sdboot=load mmc 0 0x10000000 image.ub; bootm 0x10000000\0"	\
	"bootargs=console=ttyPS0,115200n8 root=/dev/mmcblk0p2 rw rootfstype=ext4 rootwait\0"


#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_ZC70X_H */
