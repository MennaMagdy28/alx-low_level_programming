#include "main.h"
/**
 **_strcpy - string copy
 * @dest: string
 * @src: string
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
