#include "holberton.h"
/**
 * _isdigit - 0 through 9
 *
 *@c: Digit
 *
 * Return: 1 if c is digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
