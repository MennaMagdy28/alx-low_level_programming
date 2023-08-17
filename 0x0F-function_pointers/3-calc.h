#ifndef MAIN
#define MAIN

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#include <stdlib.h>
#include <stdio.h>

int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);

#endif
