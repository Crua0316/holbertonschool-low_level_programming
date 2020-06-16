#include "holberton.h"

/**
 * times_table - print times table
 *
 *Return: alway 0
 */
void times_table(void)
{
	int a, b, c, d, f;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			d = c / 10;
			f = c % 10;
			if (b == 0)
				_putchar('0');
			else
			{
				if (d == 0)
					_putchar(' ');
				else
					_putchar(d + '0');
				_putchar(f + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
