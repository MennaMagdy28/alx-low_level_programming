#include "main.h"
/**
 * valid - valid
 * @n: integer
 * Return: 1 true, 0 false*
*/
int valid(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * hex - print hex
 * @b: string
 * @start: starting
 * @end: ending
*/
void hex(char *b, int start, int end)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * ascii - print ascii
 * @b: string
 * @start: starting
 * @end: ending
*/
void ascii(char *b, int start, int end)
{
	int i = 0, ch;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!valid(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}
/**
* print_buffer - didn't understand yet
* @b: buffer
* @size: buffer size
*/
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10)  ? size - start : 10;
			printf("%08x: ", start);
			hex(b, start, end);
			ascii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
