#include "main.h"
/**
*print_times_table - print
*@n : argument
*/
void print_times_table(int n)
{
int i, j, p;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;
if (j == 0)
{
_putchar('0');
}
else if (p < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');
}
}
_putchar('\n');
}
}
