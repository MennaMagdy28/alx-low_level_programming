#include "main.h"
/**
* isLower - lower
* @c: char
* Return: 1 true, 0 false
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
* del - del
* @c: char
* Return: 1 true, 0 false
*/
int del(char c)
{
	int i;
	char deli[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == deli[i])
			return (1);
	return (0);
}
/**
* cap_string - capitalizes all words
* @s: string
* Return: pointer to dest
*/
char *cap_string(char *s)
{
	char *ptr = s;
	int find = 1;

	while (*s)
	{
		if (del(*s))
			find = 1;
		else if (isLower(*s) && find)
		{
			*s -= 32;
			find = 0;
		}
		else
			find = 0;
		s++;
	}
	return (ptr);
}
