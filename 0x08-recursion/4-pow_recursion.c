#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * @s: Pointer to string
 * Return: void
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y -1));
	}
}
