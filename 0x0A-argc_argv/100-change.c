#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: size
 * @argv: list
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i, cent = 0, money = atoi(argv[1]);
		int val[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= val[i])
			{
				cent += money / val[i];
				money %= val[i];
				if (money % val[i] == 0)
					break;
			}
		}
		printf("%d\n", cent);
	}
	else
		return (printf("Error\n"), 1);
	return (0);
}
