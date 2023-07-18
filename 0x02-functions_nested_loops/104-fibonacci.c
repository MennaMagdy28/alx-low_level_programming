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
unsigned long a = 1, b = 2, c;
printf("%lu, %lu", a, b);
for (i = 3; i <= 98; i++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
