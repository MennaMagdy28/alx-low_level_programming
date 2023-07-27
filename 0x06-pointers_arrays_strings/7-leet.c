#include "main.h"

/**
* leet - incode str
* @c: string
* Return: pointer to dest
*/
char *leet(char *c)
{
	char *cp = c;
	char decode[] = {'A', 'E', 'O', 'T', 'L'};
	int incode[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(decode) / sizeof(char); i++)
		{
			if (*c == decode[i] || *c == decode[i] + 32)
				*c = 48 + incode[i];
		}
		c++;
	}
	return (cp);

}
