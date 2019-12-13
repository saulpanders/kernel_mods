/*Paul Sanders 5/5/2018
 *Simple kernel module
 * 
 * */
#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void){
	printk(KERN_INFO "hello world.\n");

	return 0;
}

void cleanup_module(void){
	printk(KERN_INFO "goodbye world.");
}
