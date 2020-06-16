#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int d;
	int f;

	for (d = 1; d <= 10; d++)
	{
		for (f = 'a'; f <= 'z'; f++)
			_putchar(f);
		_putchar('\n');
	}
}
