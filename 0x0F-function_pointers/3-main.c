#include "3-calc.h"

/**
 * main - started
 * @argc: n
 * @argv: argu s
 * Return: int
*/

int main(int argc, char *argv[])
{

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (
(strcmp(argv[2], "+") &&
strcmp(argv[2], "-") &&
strcmp(argv[2], "*") &&
strcmp(argv[2], "/") &&
strcmp(argv[2], "%"))
)
{
printf("Error\n");
exit(99);
}

if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
&& atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

return (0);
}
