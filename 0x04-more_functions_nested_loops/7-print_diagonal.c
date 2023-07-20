#include "main.h"
/**
*print_diagonal - print line
*@n : lenght
*/
void print_line(int n)
{
if (n > 0)
{
while (n--)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
