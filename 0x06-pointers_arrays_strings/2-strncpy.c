#include "holberton.h"

/**
 *_strncpy - concatenates two strings
 *@dest: String destiny
 *@src: string origin
 *@n: Var
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[c] != '\0')
		c++;
	while (src[b] != '\0')
		b++;
	while (a < n)
	{
		if (a > b)
			dest[a] = '\0';
		else
			dest[a] = src[a];
		a++;

	}
	return (dest);
}
