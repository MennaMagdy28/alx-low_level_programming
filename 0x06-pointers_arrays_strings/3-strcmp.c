#include "main.h"

/**
* _strcmp -s1 = s2 > zero/ s1 > s2 -> +int/ s1 < s2 -> -int
* @s1: first string
* @s2: second string
* Return: value
*/
int _strcmp(char *s1, char *s2)
{
	int sum1, sum2, i, j;

	sum1 = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
