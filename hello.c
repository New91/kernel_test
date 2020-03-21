#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init init_echo(void)
{
    printk(KERN_ALERT "hello world!");
    return 0;
}

static void __exit exit_echo(void)
{
    printk(KERN_DEBUG "see you!");
}

module_init(init_echo)
module_exit(exit_echo)


MODULE_LICENSE("GPL");
MODULE_AUTHOR("new91");
MODULE_VERSION("v0.1");
MODULE_DESCRIPTION("TEST");

