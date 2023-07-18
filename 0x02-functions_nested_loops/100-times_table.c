#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: the number of the times table to print
*/
void print_times_table(int n)
{
int i, j, product, digits;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (j == 0)
{
digits = product == 0 ? 1 : (int)(log10(product)) + 1;
_putchar(product + '0');
}
else
{
_putchar(',');
_putchar(' ');
digits = product == 0 ? 1 : (int)(log10(product)) + 1;
while (digits < 4)
{
_putchar(' ');
digits++;
}
while (product > 0)
{
_putchar(product % 10 + '0');
product /= 10;
}
}
}
_putchar('\n');
}
}
}
