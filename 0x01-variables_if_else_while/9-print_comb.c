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
		if (b != 9)
		putchar(',');
		if (b != 9)
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
