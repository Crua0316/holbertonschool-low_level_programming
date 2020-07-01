#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * @s: Pointer to string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar (10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
