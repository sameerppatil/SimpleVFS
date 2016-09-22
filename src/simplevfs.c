#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sameer Patil");
MODULE_DESCRIPTION("A Simple Virtual File system");

static int __init simplevfs_init(void)
{
	printk(KERN_INFO "Simple Virtual File system server now running!\n");
	return 0;
}

static void __exit simplevfs_exit(void)
{
	printk(KERN_INFO "Virtual file system server successfully being cleaned up!\n");
}

module_init(simplevfs_init);
module_exit(simplevfs_exit);
