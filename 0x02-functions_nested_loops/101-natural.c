#include <stdlib.h>
#include <stdio.h>
/**
*main - started
*Description: 3 5 multi
*Return: Always 0 (success)
*/
int main(void)
{
int i, sum;
sum = 0;
for (i = 3; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
