#include <stdio.h>
#include <stdlib.h>
/**
*main - started
*Description: wirte alpahbet with putchar reversed
*Return:Always 0 (success)
*/
int main(void)
{
char a;
for (a = 122; a >= 97; a--)
putchar(a);
putchar('\n');
return (0);
}

