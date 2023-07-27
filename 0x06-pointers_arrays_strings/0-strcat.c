#include "main.h"

/**
* _strcat - get src str _ concatenate with dest str _ src=new var=new
* @dest: first string
* @src: second string
* Return: pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
