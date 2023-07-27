#include "main.h"

/**
* _strncat - get dest str/concatenate with only n bytes src str/src=new var=new
* @dest: first string
* @src: second string
* @n: the bytes to take
* Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n; j++)
		dest[i++] = src[j];

	return (dest);
}
