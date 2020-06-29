#include "holberton.h"

/**
 * print_chessboard - Fills memory with a constant byte
 * @a: Pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int c1, c2;

	c1 = 0;
	while (c1 < 8)
	{
		c2 = 0;
		while (c2 < 8)
		{
			_putchar(a[c1][c2]);
			c2++;
		}
		_putchar(10);
	    c1++;
	}
}
