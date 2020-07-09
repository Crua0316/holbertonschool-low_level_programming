#include <stdlib.h>
#include "holberton.h"
/**
 * *argstostr - concatenate all the arguments in the command line
 * @ac: number of arguments
 * @av: arguments
 * Return: new string with a new line between arguments
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int a, b;
	int pos, t;

	pos = 0;
	if (ac == 0 || av == NULL)
		return (0);
	for (a = 0; a < ac; a++)
		t += _strlen(av[a]);
	p = malloc(sizeof(char) * (t + ac + 1));
	if (p == NULL)
		return (0);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			p[pos++] = av[a][b];
		p[pos++] = '\n';
	}
	p[pos] = '\0';
	return (p);
}
/**
 * _strlen - calculate the length of the string
 * @s: address of that variable
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
