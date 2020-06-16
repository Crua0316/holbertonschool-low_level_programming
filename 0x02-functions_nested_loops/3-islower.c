#include "holberton.h"

/**
 * _islower - Return 1
 *
 *@c: Value of input
 *
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
