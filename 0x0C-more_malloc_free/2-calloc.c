#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: Number of caracter
* @size: var
* Return: Pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
		if (p == '\0')
			return (NULL);

	_memset(p, 0, nmemb = size);
	return (p);
}

/**
* _memset - Fill memory with a constant byte
* @s: Area
* @b: Costant byte
* @n: Number of bytes
* Return: Pointer in area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
