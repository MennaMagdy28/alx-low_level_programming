#include "main.h"
/**
 * _memset - memset
 * @c: char
 * @n: size
 * @s: string
 * Return: pointer
*/

char *_memset(char *s, char c, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = c;
	return (ptr);
}
/**
 * _calloc - calloc
 * @nmemb: int
 * @size: size
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
