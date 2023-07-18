#include <stdlib.h>
#include <stdio.h>
/**
*main - started
*Description: fibo
*Return: Always 0 (success)
*/
int main(void)
{
int i;
unsigned int a = 1, b = 2, c;
printf("%d, %d", a, b);
for (i = 3; i <= 98; i++)
{
c = a + b;
printf(", %u", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
