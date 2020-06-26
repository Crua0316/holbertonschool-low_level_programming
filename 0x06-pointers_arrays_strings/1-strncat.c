#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: String destiny
 *@src: string origin
 *@n: Var
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[c] != '\0')
		c++;
	while (src[b] != '\0')
		b++;
	if (b < n)
		n = b;
	while (a < n)
	{
		dest[c] = src[a];
		c++;
		a++;
	}
	return (dest);
}
