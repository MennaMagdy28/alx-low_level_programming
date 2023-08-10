#include "main.h"

/**
 * len - strlen
 * @s: string
 * Return: int
*/
unsigned int len(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - n concat two strings
 * @s1: string1
 * @s2: string2
 * @n: size n
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = len(s1), i = 0, total;
	char *ptr;

	ptr = malloc((size1 + n) * sizeof(char) + 1);
	if (ptr == 0)
		return (NULL);
	total = size1 + n + 1;
	for (; i < total; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
