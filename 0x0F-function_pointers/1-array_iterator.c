#include "function_pointers.h"
/**
 * array_iterator - array
 * @array: array
 * @size: size
 * @action: function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == 0 || action == NULL || array == NULL)
		return;
	while (size--)
	{
		action(*array);
		array++;
	}
}
