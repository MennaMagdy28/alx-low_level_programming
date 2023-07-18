#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: the number of the times table to print
*/
void print_times_table(int n)
{
int i, sum, j;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
sum = 0;
j = 0;
while (j < n)
{
if (sum < 10)
{
printf("%d,   ", sum);
sum = sum + i;
j++;     
}
else if (sum >= 10 && sum < 100)
{
printf("%d,  ", sum);
sum = sum + i;
j++;
}
else
{
printf("%d, ", sum);
sum = sum + i;
j++;
}
}
printf("%d\n", i * n);
}
}
}
