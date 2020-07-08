#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: New array
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int a = 0;
	unsigned int len1, len2, len3;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len3 = len1 + len2;
	p = malloc((len3 + 1) * sizeof(char));
	if (p == '\0')
		return (0);
	for ( ; a < len1; a++)
		p[a] = s1[a];
	for ( ; a < len3; a++)
		p[a] = s2[a - len1];
	p[len3] = '\0';
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