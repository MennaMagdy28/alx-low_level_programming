#include "main.h"

/**
 * clear_bit - to set a bit to 0
 * @n: refrence
 * @index: where to put 0
 * Return: 1 -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
