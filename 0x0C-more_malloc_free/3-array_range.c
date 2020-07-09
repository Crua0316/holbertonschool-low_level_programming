#include "holberton.h"
#include <stdlib.h>

/**
* array_range -  creates an array of integers
* @min: Values
* @max: Values
* Return: The pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int a, b;
	int *p;

	if (min > max)
		return ('\0');

	p = malloc(sizeof(int) * (1 + max - min));
	if (p == '\0')
		return ('\0');

			for (a = 0, b = min; b <= max; a++, b++)
				p[a] = b;
	return (p);
}
