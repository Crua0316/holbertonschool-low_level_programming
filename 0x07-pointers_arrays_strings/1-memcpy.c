#include "holberton.h"

/**
 * _memcpy - Fills memory with a constant byte
 * @dest: Pointer
 * @src: Variable char
 * @n: unsigned var
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
