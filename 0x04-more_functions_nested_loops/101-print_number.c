#include "main.h"
/**
*print_number - print number
*@n : num
*/
void print_number(int n)
{
unsigned int num;
num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 10)
print_number(num / 10);
_putchar((num % 10) + 48);
}

