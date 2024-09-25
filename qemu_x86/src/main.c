#include <stdio.h>
#include <zephyr/kernel.h>

int main(void) {
	int i = 0;
	while (1) {
		printk("Hello zephyr %d\n", i++);
		k_sleep(K_MSEC(1000));
	}
	return 0;
}
