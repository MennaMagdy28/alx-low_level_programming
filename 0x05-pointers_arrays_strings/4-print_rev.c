#include "main.h"
/**
* print_rev - string length
* @s: the string
*/
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
