/*
 * main.c
 *
 *  Created on: Apr 12, 2016
 *      Author: jcrochon
 */
#include <stdlib.h>
#include <stdio.h>

// prototypes
int plus_one(int);

int main(void) {
	int i = 10, j;

	j = plus_one(i); /* THE CALL */

	printf("i + 1 is %d\n", j);

	return 0;
}

int plus_one(int n) /* THE DEFINITION */
{
	return n + 1;
}
