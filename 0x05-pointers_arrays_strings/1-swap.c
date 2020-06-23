#include "holberton.h"

/**
 * swap_int - values two integers
 * @a: Adress of Var
 * @b: Adress of Var
 */
void swap_int(int *a, int *b)
{
int a1 = *b;
int b1 = *a;

*a = a1;
*b = b1;
}
