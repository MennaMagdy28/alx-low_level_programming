#include "main.h"

/**
 * check - checker
 * @s:string
 * @start: start
 * @end: end
 * @mod: mod
 * Return: 0 , 1
*/
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}


/**
 * palindrome - palindrome
 * @s: string
 * Return: 0 , 1
*/
int palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * last_index - last
 * @s: string
 * Return: int
*/

int last_index(char *s)
{
	if (*s > '\0')
		return (last_index(s + 1) + 1);
	else
		return (0);
}
