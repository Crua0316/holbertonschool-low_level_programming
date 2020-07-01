#include "holberton.h"

/**
 *_sqrt_recursion - blank
 * @n: blank
 * Return: balnk
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recursion(n, 1));
	}
}

/**
 * recursion - recursion root
 * @a: number
 * @b: incrementor
 * Return: -1;
 */

int recursion(int a, int b)
{
	if (a == (b * b))
	{
		return (b);
	}
	else if (a > (b * b))
	{
		return (recursion(a, b + 1));
	}
	else
	{
		return (-1);
	}
}
