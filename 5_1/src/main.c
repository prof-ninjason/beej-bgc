/*
 * main.c
 *
 *  Created on: Apr 12, 2016
 *      Author: jcrochon
 */
#include <stdlib.h>
#include <stdio.h>

void increment(int a) {
	a++;
	printf("\nafter: %i", a);
}

int main(void) {
	int i = 10;

	printf("\nbefore: %i", i);
	increment(i);

	return 0;
}
