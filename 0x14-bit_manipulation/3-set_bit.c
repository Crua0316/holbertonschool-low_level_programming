#include "holberton.h"
/**
 * set_bit - returns the value of a bit at a given index
 * @n: Value decimal
 * @index:  is the index, starting from 0 of the bit you want to get
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	a = 1 << index;
	*n = *n | a;
	return (1);
}
