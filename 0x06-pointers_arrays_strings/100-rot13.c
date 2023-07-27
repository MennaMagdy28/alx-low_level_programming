#include "main.h"

/**
* rot13 - don't understand yet
* @str: string
* Return: pointer to dest
*/
char *rot13(char *str);
{
	char *ptr = str;
	int i;
	char decode[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char incode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == decode[i])
			{
				*s = incode[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
