#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Example");
MODULE_DESCRIPTION("Basic");
MODULE_VERSION("0.01");

static int __init retr0_init(void){
	printk(KERN_INFO "Hello world!\n");
	return 0;

}

static void __exit retr0_exit(void){
	printk(KERN_INFO "Bye Bye\n");
}

module_init(retr0_init);
module_exit(retr0_exit);
