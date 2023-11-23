#include "main.h"

/**
* set_bit - set a bit
* @n: mkan el n (by refrence)
* @index: mkan el 1 el gdeeda
* Return: new value
*/
int set_bit(unsigned long int *n, unsigned int index)
{
*n += (1 << index);
return (*n);
}
