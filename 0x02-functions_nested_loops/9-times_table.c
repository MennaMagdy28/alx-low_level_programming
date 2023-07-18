#include "main.h"
/**
*times_table - print
*/
void times_table(void)
{
int i, j;
for (i = 0; i < 10 ; i++)
{
for(j = 0; j < 10; j++)
{
putchar(j + i + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
}
