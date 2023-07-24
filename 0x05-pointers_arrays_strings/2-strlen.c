#include "main.h"
/**
 * _strlen - string length
 * @s: the string
 * Return: string length
 */
int _strlen(char *s);
{
	int i, len;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
