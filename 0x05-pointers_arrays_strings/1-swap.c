#include "main.h"
/**
* swap_int - swap
* @a: pointer to a
* @b: pointer to b
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
