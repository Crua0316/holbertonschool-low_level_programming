#include "holberton.h"

/**
 * print_numbers - print numbers
 *
 * Return: numbers 0 to 9
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar(n + '0');
	_putchar('\n');
}
