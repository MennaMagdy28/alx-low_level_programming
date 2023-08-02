#include "main.h"

/**
 * factorial - find factorial on n
 * @n: num to find its factorial
 * Return: -1 if n lower thann zero, 0 if n equals one
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
