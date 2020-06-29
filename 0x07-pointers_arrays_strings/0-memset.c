#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer
 * @b: Variable char
 * @n: unsigned var
 * Return: S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
