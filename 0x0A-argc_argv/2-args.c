#include <stdio.h>

/**
 * main - prints all the arguments passed into it
 * @argc: size
 * @argv: list
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
