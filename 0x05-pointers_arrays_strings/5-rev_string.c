#include "main.h"
/**
* rev_string - string reverse
* @s: the string
*/
void rev_string(char *s)
{
	int i = 0, j = 0;

	while (s[i])
		i++;

	char str[i];

	while (i--)
	{
		str[j] = s[i];
		j++;
	}
	j = 0;
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}

}
