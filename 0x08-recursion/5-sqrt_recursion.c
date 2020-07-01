#include "holberton.h"

/**
 * recursion - fint the square recursion of a number
 * @a: Var1
 * @b: Var2
 * Return: square recursion of b
 */
int recursion(int a, int b)
{
	if ((a * a) == b)
	{
		return (a);
	}
	else if ((a * a) > b)
	{
		return (-1);
	}
	else
	{
		return (recursion(a + 1, b));
	}
}

/**
 * _sqrt_recursion - returns the natural square recursion of a number
 * @n: integer to find squre recursion
 * Return: square recursion of n
 */

int _sqrt_recursion(int n)
{
	int c = 0;

	n = recursion(c + 1, n);
	return (n);
}
