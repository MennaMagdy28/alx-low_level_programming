#include "main.h"

/**
 * len - strlen
 * @str:string
 * Return: int
*/

unsigned int len(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: NULL or pointer
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *ptr;
	unsigned int i = 0;

	size1 = len(s1);
	size2 = len(s2);
	ptr = malloc((size1 + size2) * sizeof(char) + 1);

	if (ptr == 0)
		return (0);

	for (; i < size2 + size1; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
