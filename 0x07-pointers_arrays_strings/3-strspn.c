#include "holberton.h"

/**
 * _strspn - Fills memory with a constant byte
 * @s: Pointer
 * @accept: Variable char
 * Return: String
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str, a, b;

	str = 0;
	for (a = 0; s[a] != ' '; a++)
	{
		if (str != a)
			break;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				str = str + 1;
			}
		}
	}
	return (str);
}
