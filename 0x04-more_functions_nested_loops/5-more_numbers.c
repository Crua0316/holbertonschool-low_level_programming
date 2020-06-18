#include "holberton.h"

/**
 * more_numbers - print numbers 10 times from 0 to 14
 */
void more_numbers(void)
{
	int n, n_tens, n_ones;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			n_tens = n / 10;
			n_ones = n % 10;
			if (n > 9)
				_putchar(n_tens + '0');
			_putchar(n_ones + '0');
		}
		_putchar('\n');
	}
}
