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
	{ 0xc917223d, "pci_bus_read_config_byte" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd2037915, "dev_set_drvdata" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0x85f376a9, "mfd_remove_devices" },
	{ 0xa30682, "pci_disable_device" },
	{ 0x2bd43d13, "dynamic_debug_enabled2" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x3fec048f, "sg_next" },
	{ 0xd3364703, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x102b9c3, "pci_release_regions" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x30ffe1f7, "cancel_delayed_work_sync" },
	{ 0x3758301, "mutex_unlock" },
	{ 0x1e5ed707, "pci_enable_wake" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xaf559063, "pci_set_master" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x9f1019bd, "pci_set_dma_mask" },
	{ 0x621a5065, "pci_restore_state" },
	{ 0x8502d858, "dev_err" },
	{ 0x4bf79039, "__mutex_init" },
	{ 0xf90df071, "mfd_add_devices" },
	{ 0x9f2d613e, "param_set_bool" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfee8a795, "mutex_lock" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2e97a729, "idr_remove" },
	{ 0x20f9322a, "idr_pre_get" },
	{ 0x9b3277f3, "_dev_info" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xc5aa6d66, "pci_bus_read_config_dword" },
	{ 0x340e0ae, "schedule_delayed_work" },
	{ 0x86320d11, "pci_intx" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x9cb480f4, "dynamic_debug_enabled" },
	{ 0xa44ad274, "wait_for_completion_interruptible_timeout" },
	{ 0x68f7c535, "pci_unregister_driver" },
	{ 0x2044fa9e, "kmem_cache_alloc_trace" },
	{ 0x4b1a6158, "__dynamic_dev_dbg" },
	{ 0xf4ff82f7, "pci_set_power_state" },
	{ 0x4d7d27b8, "pci_bus_write_config_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x6d090f30, "pci_request_regions" },
	{ 0x94a8242d, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x5f07b9f3, "__pci_register_driver" },
	{ 0x9214ed8a, "param_get_bool" },
	{ 0xe456bd3a, "complete" },
	{ 0x6a7a886b, "pci_enable_msi_block" },
	{ 0x3961bdf6, "pci_choose_state" },
	{ 0x436c2179, "iowrite32" },
	{ 0xa12add91, "pci_enable_device" },
	{ 0xc53c882d, "idr_get_new" },
	{ 0xa92a43c, "dev_get_drvdata" },
	{ 0x6e9681d2, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xd65e2d74, "pcie_capability_read_word" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x717f16fa, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mfd-core";

MODULE_ALIAS("pci:v000010ECd00005209sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005229sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005289sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005227sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000522Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005249sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005287sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "01738382DCD84557F0247FD");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 8,
	.rhel_release = 641,
};
