#include "holberton.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: string
*@s2: string
*@n: variable
*Return: pointer to allocated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, len1, len2;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	len1 = _strlen(s1);
		len2 = _strlen(s2);
		if (n >= len2)
			n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == '\0')
		return (0);

	for (a = 0; a < len1; a++)
		p[a] = s1[a];
	for (; a < len1 + n; a++)
		p[a] = s2[a - len1];
	p[len1 + n] = '\0';

	return (p);
}

/**
* _strlen - size of len
* @s: pointer
* Return: a
*/

int _strlen(char *s)
{
	int a = 0;

	for ( ; *s; a++)
		s++;
	return (a);
}
