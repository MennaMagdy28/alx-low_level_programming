#include "main.h"

/**
* _strcat - get src str _ concatenate with dest str _ src=new var=new
* @dest: first string
* @src: second string
* Return: pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j, ctr, tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	for (ctr = i; ctr < i + j; ctr++)
	{
		dest[ctr] = src[tmp];
		tmp++;
	}
	dest[i + j] = '\0';
	return (dest[0]);
}
