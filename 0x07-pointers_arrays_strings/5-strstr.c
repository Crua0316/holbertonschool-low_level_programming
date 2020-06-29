#include "holberton.h"

/**
 *_strstr - Fills memory with a constant byte
 * @haystack: Pointer
 * @needle: Variable char
 * Return: first ocurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[b])
		{
			for ( ; needle[b] != '\0'; b++)
			{
				if (haystack[a + b] == needle[b])
				{
					return (&haystack[a + b]);
				}
			}
		}
	}
	return (0);
}
