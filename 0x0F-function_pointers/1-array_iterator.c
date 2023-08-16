#include "function_pointers.h"
/**
 * array_iterator - array
 * @array: array
 * @size: size
 * @action: function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size--)
	{
		action(*array);
		array++;
	}
}
