#include "main.h"
/**
*more_numbers - check lower case
*/
void more_numbers(void)
{
int a, r, c;
for (r = 1; r <= 10; r++)
{
for (c = 0; c <= 14; c++)
{
a = c;
if (c > 9)
{
_putchar(1 + 48);
a = c % 10;
}
_putchar(a + 48);
}
_putchar('\n');
}
}
