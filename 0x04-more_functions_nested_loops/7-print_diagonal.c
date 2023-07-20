#include "main.h"
/**
*print_diagonal - print diagonal
*@n : lenght
*/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < 10; i++)
{
for (j = 0; j < n; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
