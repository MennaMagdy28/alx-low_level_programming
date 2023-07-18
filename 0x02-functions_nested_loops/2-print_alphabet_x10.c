#include "main.h"
/**
*print_alphabet - print
*/
void print_alphabet(void)
{
char i, j;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
_putchar(i);
_putchar('\n');
}
}
