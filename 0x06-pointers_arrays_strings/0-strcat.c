#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
    int a = 0;
    int b = 0;
    int c = 0;

	while (dest[a] != '\0') 
	{
		a++;
	}
	while (src[b] != '\0')
    {
        b++;
    }
    while (c < b)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	return (dest);
}
