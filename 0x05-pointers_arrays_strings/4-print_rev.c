#include "main.h"
/**
* print_rev - string length
* @s: the string
*/
void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		i++;
		j++;
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
