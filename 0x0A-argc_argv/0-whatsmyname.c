#include <stdio.h>
/**
 * main - prints the program name
 * @argc: counter
 * @argv: vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
