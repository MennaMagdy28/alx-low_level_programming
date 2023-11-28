#include "main.h"

/**
 * len - length
 * @s: content
 * Return: s length
*/
int len(char *s)
{
	int cnt = 0;

	if (!s)
		return (0);
	while (*s)
	{
		cnt++;
		s++;
	}
	return (cnt);
}

/**
 * create_file - create
 * @filename: file name
 * @text_content: what to append
 * Return: 1|0|-1
 */

int create_file(const char *filename, char *text_content)
{
	int fo;
	ssize_t val = 0, size = len(text_content);

	if (!filename)
		return (-1);
	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo == -1)
		return (fo);
	if (size)
		val = write(fo, text_content, size);
	close(fo);
	if (val == size)
		return (1);
	else
		return (-1);

}

