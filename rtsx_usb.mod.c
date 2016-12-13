#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x2f591d91, "usb_buffer_alloc" },
	{ 0x6980fe91, "param_get_int" },
	{ 0xa7a8d47d, "usb_sg_wait" },
	{ 0xd2037915, "dev_set_drvdata" },
	{ 0x96ec227d, "devm_kzalloc" },
	{ 0x85f376a9, "mfd_remove_devices" },
	{ 0x2bd43d13, "dynamic_debug_enabled2" },
	{ 0xc8872963, "usb_buffer_free" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x3758301, "mutex_unlock" },
	{ 0xff964b25, "param_set_int" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdce5282, "mutex_trylock" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0xced66309, "usb_deregister" },
	{ 0x4bf79039, "__mutex_init" },
	{ 0xf90df071, "mfd_add_devices" },
	{ 0xb4390f9a, "mcount" },
	{ 0x3461b433, "usb_control_msg" },
	{ 0xfee8a795, "mutex_lock" },
	{ 0x46085e4f, "add_timer" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x2611da1, "usb_bulk_msg" },
	{ 0x9cb480f4, "dynamic_debug_enabled" },
	{ 0xd5a70184, "usb_sg_cancel" },
	{ 0x4b1a6158, "__dynamic_dev_dbg" },
	{ 0x236c8c64, "memcpy" },
	{ 0xc7fec33d, "usb_sg_init" },
	{ 0x251ce55e, "usb_register_driver" },
	{ 0xa92a43c, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mfd-core";

MODULE_ALIAS("usb:v0BDAp0129d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp0139d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp0140d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "38EABD02F0DA7B297BC08ED");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 8,
	.rhel_release = 641,
};
