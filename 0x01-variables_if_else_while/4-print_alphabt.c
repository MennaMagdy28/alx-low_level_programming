#include <stdio.h>
#include <stdlib.h>
/**
*main - started
*Description: wirte alpahbet with putchar (!e !q)
*Return:Always 0 (success)
*/
int main(void)
{
char a;
for (a = 97; a <= 122; a++)
{
if (a == 101 || a == 113)
continue;
putchar(a);
}
putchar('\n');
return (0);
}
