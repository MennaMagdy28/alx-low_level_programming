#include "main.h"
/**
*times_table - print
*/
void times_table(void)
{
int i, j, p;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;
if (j == 0)
{
_putchar('0');
}
else if (product < 10)
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
