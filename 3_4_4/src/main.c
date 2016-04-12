/*
 * main.c
 *
 *  Created on: Apr 11, 2016
 *      Author: jcrochon
 */
#include <stdlib.h>
#include <stdio.h>


void main(void) {
// print numbers between 0 and 9, inclusive:
	int i = 0;
	while (i < 10) {
		printf("i is %d\n");
		i++;
	}

// do the same thing with a for-loop:
	for (i = 0; i < 10; i++) {
		printf("i is %d\n");
	}

	for(;;)
	{
				printf("I will print this again and again and again\n" );
				printf("for all eternity until the cold-death of the universe.\n");
	}
}
