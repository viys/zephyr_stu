/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>

int main(void) {
	int i = 0;
	while (1) {
		printf("Hello zephyr %d\n", i++);
		k_msleep(2000);
	}
	return 0;
}
