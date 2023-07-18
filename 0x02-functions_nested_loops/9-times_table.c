#include "main.h"
/**
*times_table - print
*/
void times_table(void)
{
int i, j;
for (i = 0; i < 10 ; i++)
{
_putchar('0');
_putchar(' ');
for(j = 0; j < 10; j++)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
