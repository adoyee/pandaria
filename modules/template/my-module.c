/*
 * template file for linux kernel module
 */

#include <linux/module.h>

static int __init mymodule_init(void)
{
    printk(KERN_INFO "Hello, kernel module loaded!\n");
    return 0;
}

static void __exit mymodule_exit(void)
{
    printk(KERN_INFO "Goodbye, kernel module unloaded!\n");
}

module_init(mymodule_init);
module_exit(mymodule_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("adoyee");
MODULE_VERSION("0.0.1");
