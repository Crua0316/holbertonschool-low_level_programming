#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + 48);
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
