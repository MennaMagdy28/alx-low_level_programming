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
 * append_text_to_file - append
 * @filename: file name
 * @text_content: what to append
 * Return: 1|-1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	ssize_t val = 0, size = len(text_content);

	if (!filename)
		return (-1);
	fo = open(filename, O_WRONLY | O_APPEND);
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
