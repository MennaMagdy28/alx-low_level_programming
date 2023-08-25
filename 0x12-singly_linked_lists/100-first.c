#include "stdio.h"

void first(void) __attribute__ ((constructor));

/**
 * first - print before main
 * function is executed
*/
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my bacK!\n");
}
