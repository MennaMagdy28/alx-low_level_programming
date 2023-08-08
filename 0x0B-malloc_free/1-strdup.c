#include "main.h"

/**
 * _strdup -  copy of the string given as a parameter.
 * @str: string
 * Return: pointer or NULL
*/

char *_strdup(char *str)
{
	char *ptr = (char *) malloc(sizeof(str));
	long unsigned int i;

	if (ptr == 0)
		return (NULL);
	for (i = 0; i < sizeof(str); i++)
		ptr[i] = str[i];
	return (ptr);

}
