#include "main.h"
/**
*print_last_digit - check lower case
*@num :the argument
*Return: last digit of num
*/
int print_last_digit(int num)
{
int digit;
if (num > 0)
digit = num % 10;
else
digit = -(num % 10);
_putchar(digit + '0');
return (digit);
}
