#include "main.h"
/**
*_isdigit - check lower case
*@c :the argument
*Return: 1 if c is digit, 0 otherwise
*/
int _islower(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
