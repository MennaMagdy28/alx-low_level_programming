#include "3-calc.h"

/**
 * get_op_func - get function 
 * @s: pointer
 * Return: s
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (!strcmp(oops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
