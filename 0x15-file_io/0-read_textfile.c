#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return: number of read letters|0 if failed|filename = null|can't open
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int of;
	size_t value;
	char buffer[1024 * 8];

	if (!filename || !letters)
		return (0);
	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	value = read(of, &buffer, letters);
	value = write(STDOUT_FILENO, &buffer[0], value);
	close(of);
	return (value);
}
