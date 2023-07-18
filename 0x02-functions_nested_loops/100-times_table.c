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
printf("%d, ", sum);
sum = sum + i;
j++;
}
printf("%d\n", i * n);
}
}
}
