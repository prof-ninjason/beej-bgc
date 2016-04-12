/*
 * 2.2.c
 *
 *  Created on: Apr 10, 2016
 *      Author: jcrochon
 */
#include <stdlib.h>
#include <stdio.h>


int main(void) {
	int i, num, result = 0;

	scanf("%d", &num); // read the number from the keyboard

	for (i = 1; i <= num; i++) { // compute the result
		result += i;
	}

	printf("%d\n", result); // output the result

	return 0;
}
