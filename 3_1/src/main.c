/*
 * main.c
 *
 *  Created on: Apr 10, 2016
 *      Author: jcrochon
 */
#include <stdlib.h>
#include <stdio.h>


void main(void) {
	main2();
	putchar('\n');
	main3();
	putchar('\n');
	main4();
	putchar('\n');
}

int main2(void) {
	int i; /* holds signed integers, e.g. -3, -2, 0, 1, 10 */
	float f; /* holds signed floating point numbers, e.g. -3.1416 */

	printf("Hello, World!\n"); /* ah, blessed familiarity */

	return 0;
}

int main3(void) {
	int i;

	i = 2; /* assign the value 2 into the variable i */

	printf("Hello, World!\n");

	return 0;
}

int main4(void) {
	int i;

	i = 2; /* assign the value 2 into the variable i */

	printf("Hello, World!  The value of i is %d, okay?\n", i);

	return 0;
}
