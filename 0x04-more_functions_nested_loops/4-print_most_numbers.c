#include "main.h"
/**
*print_most_numbers - print all functions
*/
void print_most_numbers(void)
{
int c;
c = 48;
while (c >= 48 && c <= 57)
{
if (c == 50 || c == 52)
continue;
_putchar(c);
c++;
}
_putchar('\n');
}
