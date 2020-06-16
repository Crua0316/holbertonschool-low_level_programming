#include "holberton.h"

/**
 * _isalpha - print 1 or 0
 *
 *@c: value of input
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
