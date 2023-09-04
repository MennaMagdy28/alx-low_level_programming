#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 exists, -1 does not exist
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(f, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(f);

	return (1);
}
