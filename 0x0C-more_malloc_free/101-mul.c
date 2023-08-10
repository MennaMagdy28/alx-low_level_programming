#include "main.h"

/**
 * _puts - puts
 * @str: string
 * Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - atoi
 * @s: char
 * Return: integer
*/
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, first, i;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
	{
		if (s[first] == '-')
			sign *= -1;
	}
	for (i = first; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}

/**
 * print_int - print innt 
 * @n: int
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i = 0, resp;

	for (; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		resp = n / d;
		_putchar('0' + resp);
	}
}

/**
 * main - started
 * @argc: int
 * @argv: arguments list
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
