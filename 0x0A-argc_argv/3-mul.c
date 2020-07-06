#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the product of two numbers
 * @argc: counter
 * @argv: vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", a);
	return (0);
}
