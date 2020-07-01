#include "holberton.h"

/**
 *  _pow_recursion- Prints a string
 * @x: Var
 * @y: Var
 * Return: Nothing
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
		return (x * _pow_recursion(x, y - 1));
	}
}
