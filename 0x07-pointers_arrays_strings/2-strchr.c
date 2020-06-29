#include "holberton.h"

/**
 * _strchr - Fills memory with a constant byte
 * @s: Pointer
 * @c: Variable char
 * Return: dest
 */

char *_strchr(char *s, char c)
{
	int a;
	char *temp;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			temp = &s[a];
			return (temp);
		}
	}
	if (s[a] == c)
	{
		return (&s[a]);
	}
	return (0);
}
