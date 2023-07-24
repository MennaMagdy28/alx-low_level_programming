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
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
