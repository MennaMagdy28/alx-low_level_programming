#include "main.h"
/**
* _memset - memset effect
* @s: string
* @b:2nd string
* @n: 1st string size
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
