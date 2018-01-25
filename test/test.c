/*
 * test.c
 *
 *  Created on: Jan 25, 2018
 *      Author: jcrochon
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int i, num, result = 0;

	printf("\nPlease enter a number to sum: ");
	fflush(stdout);

	scanf("%d", &num); // read the number from the keyboard

	for (i = 1; i <= num; i++) { // compute the result
		result += i;
	}

	printf("\nCumulative sum of numbers from 1 to %d = %d\n", num, result); // output the result

	return 0;
}
