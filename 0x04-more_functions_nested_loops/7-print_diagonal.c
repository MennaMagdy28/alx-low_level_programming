#include "main.h"
/**
*print_diagonal - print diagonal
*@n : lenght
*/
void print_diagonal(int n)
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
