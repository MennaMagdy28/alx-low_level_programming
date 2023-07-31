#include "main.h"
#include <stdio.h>
/**
* print_diagsums - diagsums
* @a: string
* @size: size
*/

void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	j = size - 1;
	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[j - i];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
