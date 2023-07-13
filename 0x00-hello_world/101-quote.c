#include <unistd.h>
/**
*main - started
*Description: c print without printf nor puts
*Return: 1 (not success)
*/
int main(void)
{
char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, string, 59);
return (1);
}
