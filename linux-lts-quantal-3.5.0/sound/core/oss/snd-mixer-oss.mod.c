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

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb128b138, "module_layout" },
	{ 0xff95a544, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x72df2f2a, "up_read" },
	{ 0x12909485, "snd_ctl_find_numid" },
	{ 0xcd680a86, "snd_card_unref" },
	{ 0x48f77908, "snd_card_file_remove" },
	{ 0x3bfbd926, "no_llseek" },
	{ 0x77aa089b, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xd35e9659, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x4c1da3de, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd0f0d945, "down_read" },
	{ 0xfc629f82, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x629cce65, "snd_ctl_notify" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd36d011b, "mutex_lock" },
	{ 0x3943e0e8, "snd_cards" },
	{ 0x4b015768, "snd_iprintf" },
	{ 0x4213f57b, "module_put" },
	{ 0xbc1238fa, "snd_mixer_oss_notify_callback" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe094f16d, "snd_card_file_add" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8feb4865, "snd_register_oss_device" },
	{ 0x496d7988, "kmem_cache_alloc_trace" },
	{ 0xee6e2a5c, "snd_ctl_find_id" },
	{ 0xed0afa7e, "snd_unregister_oss_device" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0xeaf57edb, "snd_info_free_entry" },
	{ 0xfffc0a23, "snd_info_register" },
	{ 0xa49a6eba, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "CC32207A7A7B29D740F3549");