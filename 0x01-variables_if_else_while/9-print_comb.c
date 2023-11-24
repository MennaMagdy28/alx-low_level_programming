#include <stdio.h>
#include <stdlib.h>
/**
*main - started
*Description: wirte numbers with putchar with , and space
*Return:Always 0 (success)
*/
int main(void)
{
int a;
for (a = 48; a <= 57; a++)
{
putchar((char)a);
if (a == 57)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
