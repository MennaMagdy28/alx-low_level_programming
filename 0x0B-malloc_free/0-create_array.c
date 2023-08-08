#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: int
 * @c: char
 * Return: pointer or NULL
*/
char *create_array(unsigned int size, char c)
{
	char* ptr = (char*) malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	else
	{
		while (size != 0)
		{
			ptr[size - 1] = c;
			size--;
		}
		return(ptr);
	}
}
