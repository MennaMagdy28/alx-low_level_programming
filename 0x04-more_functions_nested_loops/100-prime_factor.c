#include <stdio.h>
/**
*_sqrt - sqrt
*@x : input
*Return: sqrt of x
*/
double _sqrt(double x)
{
float sqrt, tmp;
sqrt = x / 2;
tmp = 0;
while(sqrt != tmp)
{
tmp = sqrt;
sqrt = (x / tmp + tmp) / 2;
}
return (sqrt);
}
/**
*largest_prime - largest prime factor
*@num : input
*/
void largest_prime(long int num)
{
int prm, largest;
while (num % 2 == 0)
num = num / 2;
for (prm = 3; prm <= _sqrt(num); prm += 2)
{
while(num % prm == 0)
{
num = num / prm;
largest = prm;
}
}
if (num > 2)
largest = num;
printf("%d\n", largest);
}
/**
*main - started
*Description : largest prime main
*Return:  Always 0 (success)
*/
int main(void)
{
largest_prime(612852475143);
return (0);
}
