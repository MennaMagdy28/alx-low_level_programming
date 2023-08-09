#include "main.h"

/**
 * len - strlen
 * @str:string
 * Return: int
*/

int len(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr -  arguments to string
 * @ac: int
 * @av: arguments
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, cmpt = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
		nc += len(av[i]);

	ptr = malloc(sizeof(char) * nc + 1);
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			ptr[cmpt] = av[i][j];
		ptr[cmpt] = '\n';
		cmpt++;
	}
	ptr[cmpt] = '\0';
	return (ptr);
}
