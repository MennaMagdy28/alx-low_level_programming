#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - started
*Description: Find if a random number is negative or positive
*Return: Always 0 (success)
*/
int main(void)
{
int n;
rand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zero", n);
else
printf("%d is negative", n);
return (0);
}
