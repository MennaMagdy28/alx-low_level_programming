#include "main.h"

/**
* get_bit - get the bit at index
* @n: dec
* @index: what value in it
* Return: value in index
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
	return (-1);
else if ((n & (1 << index)) > 0)
	return (1);
else
	return (0);

}
