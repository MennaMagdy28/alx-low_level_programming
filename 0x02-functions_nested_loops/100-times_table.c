#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: the number of the times table to print
*/
void print_times_table(int n)
{
int p, m, x;
if (n <= 15 &&  n >= 0)
{
for (x = 0; x <= n; x++)
{
printf("0");
for (m = 1; m <= n; m++)
{
_putchar(',');
_putchar(' ');
p = x * m;
if (p <= 9)
_putchar(' ');
if (p <= 99)
_putchar(' ');
if (p >= 100)
{
_putchar((p / 100) + 48);
_putchar((p / 10) % 10 + 48);
}
else if (p <= 99 && p >= 10)
_putchar((p / 10) + 48);
_putchar ((p % 10) + 48);
}
_putchar('\n');
}
}
