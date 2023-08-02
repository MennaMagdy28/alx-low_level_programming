#include "main.h"

/**
 * prime - check if prime
 * @n: num
 * @i: loop
 * Return: 0 , 1
*/
int prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}



/**
 * _is_prime_number - check if prime
 * @n: num
 * Return: 0 , 1
*/

int _is_prime_number(int n)
{
	return (prime(n, 2));
}
