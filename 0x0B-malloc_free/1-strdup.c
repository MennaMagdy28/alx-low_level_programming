#include "main.h"

/**
 * len - strlen
 * @str:string
 * Return: int
*/
unsigned int len(char *str)
{
	unsigned int i = 0;

	if(str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup -  copy of the string given as a parameter.
 * @str: string
 * Return: pointer or NULL
*/

char *_strdup(char *str)
{
	unsigned int i, j = len(str);
	char *ptr = malloc(sizeof(*str) * j + 1);

	if (ptr == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = str[i];
	return (ptr);

}
