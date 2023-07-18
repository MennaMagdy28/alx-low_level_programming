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
long fib[3] = {1, 2, 0};
long sum = 2;
while (fib[2] < 4000000)
{
fib[2] = fib[0] + fib[1];
if (fib[2] % 2 == 0)
{
sum += fib[2];
}
fib[0] = fib[1];
fib[1] = fib[2];
}
printf("%ld\n", sum);
return (0);
}
