#include "main.h"

/**
 * _puts_recursion - write as puts function but with recursion statment
 * @s: the string to print
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
