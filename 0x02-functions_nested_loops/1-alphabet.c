#include "main.h"
/**
*print_alphabet - print
*/
void print_alphabet(void)
{
char i;
for (i = 97; i <= 122; i++)
_putchar(i);
_putchar('\n');
}
/**
*main - check the code
*
*Return: Always 0
*/
int main(void)
{
print_alphabet();
return (0);
}
