#include "holberton.h"

/**
 * _strlen_recursion - Print a string in reverse
 * @s: Pointer to string
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
		l = (_strlen_recursion(s + 1));
		return (l + 1);
	}
}
