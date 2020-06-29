#include "holberton.h"

/**
 *_strstr - Fills memory with a constant byte
 * @haystack: Pointer
 * @needle: Variable char
 * Return: first ocurrence
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a;

    a = 0;
    while (haystack[a])
    {
        while (haystack[a] && needle[a] && haystack[a] == needle[a])
        {
            a++;
        }
        if (!needle[a])
        {
            return (haystack);
        }
        haystack++;
    }
    return('\0');
}
