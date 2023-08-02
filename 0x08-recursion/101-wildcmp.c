#include "main.h"
/**
 * move - move
 * @s2: string
 * Return: pointer
*/
char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}

/**
 * inc - magic inc
 * @s1: string1
 * @s2: string2
 * Return: 1 , 0
*/

int inc(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inc(s1 + 1, s2);
	return (ret);
}
/**
 * wildcmp - wild
 * @s1: strin1
 * @s2: string2
 * Return: 1 , 0
*/
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && s2 == '*' && !*move(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !*s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inc(s1, s2);
		return (!!ret);
	}
	return (0);
}
