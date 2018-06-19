#include <linux/kernel.h>
#include <linux/linkage.h>

asmlinkage long sys_cs3753_add(int a, int b, int* c) {
	printk(KERN_ALERT "a: %d\n", a);
	printk(KERN_ALERT "b: %d\n", b);
	*c = a + b;
	printk(KERN_ALERT "c: %d\n",*c);
	return 0;
}

