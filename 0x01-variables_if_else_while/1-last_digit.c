#include <stdlib.h>
/**
*main - started
*Description: find last digit
*Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int x;
x = n % 10;
if (x == 0)
printf("Last digit of %d is %d and is 0", n, x);
else if (x > 5)
printf("Last digit of %d is %d and is greater than 5", n, x);
else
printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
return (0);
}
