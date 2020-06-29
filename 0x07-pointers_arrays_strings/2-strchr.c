#include "holberton.h"

/**
 * _strchr - Fills memory with a constant byte
 * @s: Pointer
 * @c: Variable char
 * Return: first ocurrence
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			break;
		}
	}
	if (s[a] == c)
	{
		return (&s[a]);
	}
	return (0);
}
