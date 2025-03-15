/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2000-2010
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * (C) Copyright 2001 Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Andreas Heppel <aheppel@sysgo.de>
 */

#include <config.h>
#include <env_callback.h>
#include <linux/stringify.h>

#include <generated/environment.h>

const char default_environment[] = {
	"arch=arm\0"
	"baudrate=115200\0"
	"board=u200\0"
	"board_name=u200\0"
	"cpu=armv8\0"
	"dfu_alt_info=fitimage ram 0x08080000 0x4000000\0"
	"fdtoverlay_addr_r=0x01000000\0"
	"kernel_comp_addr_r=0x0d080000\0"
	"kernel_comp_size=0x2000000\0"
	"loadaddr=0x1000000\0"
	"pxefile_addr_r=0x01080000\0"
	"ramdisk_addr_r=0x13000000\0"
	"soc=meson\0"
	"stderr=vidconsole,serial\0"
	"stdin=usbkbd,serial\0"
	"stdout=vidconsole,serial\0"
	"vendor=amlogic\0"
	"baudrate=115200\0"
	"stderr=serial\0"
	"stdin=serial\0"
	"stdout=serial\0"
	"display_bpp=16\0"
	"display_color_bg=0\0"
	"display_color_fg=0xffff\0"
	"display_color_index=16\0"
	"display_height=800\0"
	"display_init=1\0"
	"display_layer=osd0\0"
	"display_stack=boe\0"
	"display_width=480\0"
	"fb_addr=0x1f800000\0"
	"fb_height=800\0"
	"fb_width=480\0"
	"frac_rate_policy=1\0"
	"osd_reverse=0\0"
	"outputmode=panel\0"
	"panel_type=lcd_8\0"
	"video_reverse=0\0"
	"dtb_mem_addr=0x1000000\0"
	"fdt_high=0x20000000\0"
	"loadaddr=1080000\0"
	"lock=10001000\0"
	"silent=off\0"
	"upgrade_step=0\0"
	"bootcmd=fatload mmc 2:1 0x1000000 boot.scr; source 0x1000000;\0"
	"\0"
};

#include <env_internal.h>
static_assert(sizeof(default_environment) <= ENV_SIZE,
	      "Default environment is too large");
