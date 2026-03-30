#include <linux/module.h>
#include <linux/init.h>

static int char_driver_init(void) {
		printk(KERN_INFO "hello\n");
		return 0;
}

static void char_driver_exit(void) {
		printk(KERN_INFO "bye\n");
}

module_init(char_driver_init);
module_exit(char_driver_exit);

MODULE_AUTHOR("MidhunManu");
MODULE_LICENSE("GPL");
