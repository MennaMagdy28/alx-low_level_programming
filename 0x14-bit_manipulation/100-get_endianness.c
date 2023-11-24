#include "main.h"

/**
* get_endianness - get
* Return: 0 1
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;

if (*c)
return (1);
return (0);
}
