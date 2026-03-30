#include <linux/module.h>
#include <linux/init.h>

int char_driver_init(void) {
	printk(KERN_INFO "hello");
	return 0;
}

void char_driver_exiti(void) {
	printk(KERN_INFO("bye");
}

module_init(char_driver_init);
module_exit(char_driver_exit);
