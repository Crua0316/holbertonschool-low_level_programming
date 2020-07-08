#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - return a pointer
 * @str: array
 * Return: the new array
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int a = 0, len;

	if (str == '\0')
		return (0);
	len = _strlen(str);
	p = malloc(len + 1 * sizeof(char));
	if (p == '\0')
		return (0);
	for ( ; a < len; a++)
		p[a] = str[a];
	p[a] = str[a];
	return (p);
}
/**
 * _strlen - calculate the length of the string
 * @s: address of that variable
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
