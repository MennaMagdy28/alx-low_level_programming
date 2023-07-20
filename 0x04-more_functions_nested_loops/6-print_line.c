#include "main.h"
/**
*print_line - print line
*@n : lenght
*/
void print_line(int n)
{
n = n + 1;
if (n > 0)
{
while (n--)
{
_putchar('_');
}
_putchar('\n');
}
}
