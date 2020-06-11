#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		putchar(b + 48);
	putchar(10);
	return (0);
}
