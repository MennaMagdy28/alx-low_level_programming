#include "main.h"

/**
 * string_nconcat - n concat two strings
 * @s1: string1
 * @s2: string2
 * @n: size n
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	ptr = malloc(size1 + n + 1);
	if (ptr == 0)
		return (NULL);

	for (; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
