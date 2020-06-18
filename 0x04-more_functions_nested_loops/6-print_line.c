#include "holberton.h"

/**
 * print_line - draws a stright line
 *
 * @n: Value of first input
 */
void print_line(int n)
{
	int a;

	if (n > 0)
		for (a = 0; a < n; a++)
			_putchar('_');
	_putchar('\n');
}
