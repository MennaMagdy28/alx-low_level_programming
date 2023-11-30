#include "main.h"

#define ERROR_CLOSE "Error: Can't close fd %d\n"
#define ERROR_READ "Error: Can't read from file %s\n"
#define ERROR_WRITE "Error: Can't write to %s\n"
#define USAGE "USAGE: cp file_from file_to\n"
#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - main
 * @argc: arguments count
 * @argv: argumnts vector
 * Return: 1 | 0
 */
int main(int argc, char *argv[])
{
	int from = 0, to = 0;
	ssize_t val;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, ERROR_READ, av[1]), exit(98);
	to = open(av[2], O_RDONLY | O_CREAT | O_TRUNC, PERMISSION);
	if (to == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, av[2]), exit(99);
	while (val = read(from, buffer, 1024) > 0)
		if (write(ro, buf, val) != val)
			dprintf(STDERR_FILENO, ERROR_WRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERROR_READ, av[1]), exit(98);
	from = close(from);
	to = close(to);
	if (from)
		dprintf(STDERR_FILENO, ERROR_CLOSE, from), exit(100);
	if (to)
		dprintf(STDERR_FILENO, ERROR_CLOSE, to), exit(100);
	return (EXIT_SUCCESS);
}
