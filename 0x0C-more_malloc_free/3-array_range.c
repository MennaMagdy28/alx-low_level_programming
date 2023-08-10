#include "main.h"

/**
 * array_range - array of integrs
 * @min: start
 * @max: end
 * Return: array
*/

int *array_range(int min, int max)
{
	int len = max - min + 1, i = 0, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * len);
	if (ptr == 0)
		return (NULL);
	for (; i < len; i++)
		ptr[i] = min++;
	return (ptr);

}
