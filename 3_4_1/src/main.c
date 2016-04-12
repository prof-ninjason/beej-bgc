/*
 * main.c
 *
 *  Created on: Apr 10, 2016
 *      Author: jcrochon
 */
#include <stdlib.h>
#include <stdio.h>


void main(void) {
	int i = 11;

	if (i > 10) {
		printf(
				"Yes, i is greater than 10.\nAnd this will also print if i is greater than 10.\n");
		i--;
		printf("i becomes 9.\nNow i is less than 10.\n");
	}

	if (i <= 10) {
		printf("i is less than or equal to 10.\n");
	}
}
