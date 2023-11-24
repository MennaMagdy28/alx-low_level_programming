//
// Created by Menna Magdy on 11/23/2023.
//
#include "main.h"
#include <stdio.h>

/**
 * Slen - a function to get string length
 * @s: string
 * Return: int length
 */
unsigned int Slen(const char *s)
{
    int x = 0;
    while(*s != '\0')
    {
        x++;
        s++;
    }
    printf("%d", x);
    return (x);
}

/**
* binary_to_unit - a function to convert binary to decimal
 * @b: a string contains 0s 1s => binary
 * Return: integer num => decimal
*/
unsigned int binary_to_uint(const char *b)
{

}