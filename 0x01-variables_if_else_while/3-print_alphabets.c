#include <stdlib.h>
/**
*main - started
*Description: print alphabets with putchar (capital also)
*Return:Always 0 (success)
*/
int main(void)
{
char a;
for (a = 97; a <= 122; a++)
putchar(a);
for (a = 65; a <= 90; a++)
putchar(a);
return (0);
}
