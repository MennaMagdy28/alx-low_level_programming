#include "main.h"

/**
 * flip_bits - flip with xor
 * @n: num
 * @m: num
 * Return: cnt
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int temp = n ^ m;
	int i = 0;

	for (; i < 32; i++)
	{
		if ((temp & 1 << i))
			cnt++;
	}
	return (cnt);

}
