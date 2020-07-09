#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * checkdigits - function to check all the digits in the string
 * @s: string
 * Return: 0
 */
int checkdigits(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (!isdigit(s[a]))
			return (0);
	}
	return (1);
}
/**
 * main - prints the product of two numbers
 * @argc: counter
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	unsigned int res = 0;
	int c = 1;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (; c < argc; c++)
	{
		if (checkdigits(argv[c]))
			res += atoi(argv[c]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
