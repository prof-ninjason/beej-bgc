/*
 * main.c
 *
 *  Created on: Apr 12, 2016
 *      Author: jcrochon
 */
#include <stdio.h>

int foo(void); /* this is the prototype! */

int main(void) {
	int i = foo();
	printf("i = %i", i);

	return 0;
}

/* this is the definition, just like the prototype! */
int foo(void) {
	return 3490;
}
