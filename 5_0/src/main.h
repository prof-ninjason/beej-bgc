/*
 * main.h
 *
 *  Created on: Apr 12, 2016
 *      Author: jcrochon
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <stdio.h>

void doit(int a, int b) {
	printf("\nplus_one(a):          %3i", plus_one(a)); /* the type of a is int */
	printf("\nplus_one(10):         %3i", plus_one(10)); /* the type of 10 is int */
	printf("\nplus_one(1 + 10):     %3i", plus_one(1 + 10)); /* the type of the whole expression is still int */
	printf("\nplus_one(a + 10):     %3i", plus_one(a + 10)); /* the type of the whole expression is still int */
	printf("\nplus_one(a + b):      %3i", plus_one(a + b)); /* the type of the whole expression is still int */
	printf("\nplus_one(plus_one(a): %3i", plus_one(plus_one(a))); /* oooo! return value is int, so it's ok!  */
}

#endif /* MAIN_H_ */
