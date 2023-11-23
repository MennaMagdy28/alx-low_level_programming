#include"main.h"

/**
* Slen - a function to get string length
* @s: string
* Return: intlength
*/
unsigned int Slen(const char *s)
{
int x = 0;

if (!s)
return (0);

while (*s != '\0')
{
x++;
s++;
}
return (x);
}

/**
* _pow - power function
* @num: number
* @p: power
* Return: int num
*/
unsigned int _pow(int num, int p)
{
int res = 1, i;

for (i = 0; i < p; i++)
res *= num;
return (res);
}

/**
* binary_to_uint - a function to convert binary to decimal
* @b: a string contains 0s 1s => binary
* Return: integer num => decimal
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int size = Slen(b) - 1, i, res = 0;


for (i = 0; i < size + 1; i++, b++)
{
if(*b != '0' && *b != '1')
	return (0);
else if (*b & 1)
{
res += _pow(2, size - i);
}
}
return (res);

}
