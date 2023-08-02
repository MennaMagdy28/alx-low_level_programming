#include "main.h"

/**
 * _strlen_recursion - find the length of the string with recursion
 * @s: the string to find its length
 * Return: length
*/

int _strlen_recursion(char *s)
{
	if(*s == '\0')
		return(0);
	else
		return(_strlen_recursion(s + 1) + 1);

}
