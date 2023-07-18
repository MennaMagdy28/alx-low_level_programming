#include <stdlib.h>
#include <stdio.h>
/**
*numlen -return len of string
*@num : operand num
*Return: num of digits
*/
int numlen(int num)
{
int len = 0;
if (!num)
return (1);
while (num)
{
num = num / 10;
len += 1;
}
return (len);
}
/**
*main - started
*Description: fibo
*Return: Always 0 (success)
*/
int main(void)
{
int count, initial;
unsigned long a = 1, b = 2, c, mx = 100000000, flo = 0, flo2 = 0, sumo = 0;
for (count = 1; count <= 98; count++)
if (flo > 0)
printf("%lu", flo);
initial = numlen(mx) - 1 - numlen(a);
while (flo > 0 && initial > 0)
{
printf("%d", 0);
initial--;
}
printf("%lu", a);
c = (a + b) % mx;
sumo = flo + flo2 + (a + b) / mx;
a = b;
b = c;
flo = flo2;
flo2 = sumo;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
