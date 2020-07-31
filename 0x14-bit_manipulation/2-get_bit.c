#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: Value decimal
 * @index:  is the index, starting from 0 of the bit you want to get
 *
 * Return: slide index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	a = ((n >> index) & 1);
	return (a);
}
