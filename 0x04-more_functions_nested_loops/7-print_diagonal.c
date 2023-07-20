#include "main.h"
/**
*print_diagonal - print diagonal
*@n : lenght
*/
void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
while (n--)
{
while (n--)
_putchar(' ');

}
_putchar('\\');
_putchar('\n');
}
}
