#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: the number of the times table to print
*/
void print_times_table(int n)
{
int i, sum;
for (i = 0; i <= n; i++)
{
sum = 0;
for (j = 0; j < n; j++)
{
sum = sum + i;
printf("%d, ", sum);
}
printf("%d\n", i * n);
}
}
