#include "holberton.h"

/**
 * more_numbers - print numbers 10 times from 0 to 14
 */
void more_numbers(void)
{
	int a, b, c, d;

	for (d = 1; d <= 10; d++)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a / 10;
			c = a % 10;
			if (a > 9)
				_putchar(b + '0');
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
