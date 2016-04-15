/*
 * main.c
 *
 *  Created on: Apr 12, 2016
 *      Author: jcrochon
 */
#include "../src/main.h"

int main(void) {
	int i = 10, j, a = 5, b = 10;

	j = plus_one(i); /* THE CALL */

	printf("i + 1 is %d\n", j);

	doit(a, b);
	return 0;
}
