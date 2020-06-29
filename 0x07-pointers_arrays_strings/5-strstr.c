#include "holberton.h"

/**
 *_strstr - Fills memory with a constant byte
 * @haystack: Pointer
 * @needle: Variable char
 * Return: first ocurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b = 0;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[b])
		{
			break;
		}
	}
	if (haystack[a] == needle[b])
	{
		return (&haystack[a]);
	}
	return (0);
}
