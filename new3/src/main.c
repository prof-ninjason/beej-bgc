/*
 * main.c
 *
 *  Created on: Apr 12, 2016
 *      Author: jcrochon
 */
#include <datetimeapi.h>
#include "../src/jcr.h"

void main(void) {
	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	printf("I printed something today!");

	printf("\nCurrent local time and date: %s", asctime(timeinfo));
}