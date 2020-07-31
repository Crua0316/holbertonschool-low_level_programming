#include "holberton.h"

/**
 * recursion_b - Recurison binary
 * @a: entry point
 *
 * Return: Number on binary
 */

void recursion_b(unsigned long a)
{
	if (a == 0)
	{
		return;
	}

	recursion_b(a >> 1);
	_putchar((a & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: entry point
 *
 * Return: Number on binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	recursion_b(n);
}
