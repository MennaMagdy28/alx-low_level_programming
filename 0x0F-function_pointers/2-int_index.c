#include "function_pointers.h"


/**
 * int_index - searches for an integer.
 * @array: Name passed
 * @size: Number of iterations
 * @cmp: Points to a function
 * Return: Always 0 (success)
**/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (size--)
	{
		if (cmp(array[i]))
			break;
		i++;
	}
	if (i == size)
		return (-1);
	return (i);
}
