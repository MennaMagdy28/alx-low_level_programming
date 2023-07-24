#include "main.h"
int _strlen(char *s);
{
	int i, len;
	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
