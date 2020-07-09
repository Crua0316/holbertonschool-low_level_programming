#include "holberton.h"
#include <stdlib.h>

/**
*malloc_checked - function that allocates memory
*@b: unsigned int
*Return: P
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == '\0')
		exit(98);
	return (p);
}
