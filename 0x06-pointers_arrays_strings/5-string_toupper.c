#include "main.h"

/**
* string_toupper - make upper case
* @s: string
* Return: pointer to dest
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		i++;
	}
	return (s);
}
