#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the opcodes of its own main function
* @argc: lenght of arguments
* @argv: array of arguments
*
* Return: int
*/

int main(int argc, char *argv[])
{
	int a = 0;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (a < (atoi(argv[1]) - 1))
	{
		printf("%02x", *p);
		a++;
		p++;
	}
	printf("%02x\n", *p);
	return (0);
}
