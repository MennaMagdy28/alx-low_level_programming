#include "main.h"
/**
* rev_string - string reverse
* @s: the string
*/
void rev_string(char *s)
{
	int i, j;
	char tmp;

	while (s[i])
		i++;

	for (j = 0; j < i / 2; i++)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}

}
