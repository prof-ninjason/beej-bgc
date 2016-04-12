/*
 * main.c
 *
 *  Created on: Apr 12, 2016
 *      Author: jcrochon
 */
#include "../src/main.h"

// prototypes
int plus_one(int);

int main(void) {
	int i = 10, j, a = 5, b = 10;

	j = plus_one(i); /* THE CALL */

	printf("i + 1 is %d\n", j);

	doit(a, b);
	return 0;
}

int plus_one(int n) /* THE DEFINITION */
{
	return n + 1;
}

