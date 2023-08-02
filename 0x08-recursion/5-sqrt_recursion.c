#include "main.h"

/**
* square - to get the value of square
* @n: num
* @i: the loop
* Return: i
*/

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - find the square root with recursion
 * @n: number
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
