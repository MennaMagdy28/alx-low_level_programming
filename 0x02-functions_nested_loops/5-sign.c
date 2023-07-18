#include "main.h"
/**
*print_sign - check lower case
*@n :the argument
*Return: 1 if n greater than 0, 0 if n is zero, -1 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
