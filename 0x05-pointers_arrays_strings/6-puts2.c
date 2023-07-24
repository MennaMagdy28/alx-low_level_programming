#include "main.h"
/**
* puts2 - string print
* @str: the string
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 ==0)
			-putchar(str[i]);
	}
	_putchar('\n');
}
