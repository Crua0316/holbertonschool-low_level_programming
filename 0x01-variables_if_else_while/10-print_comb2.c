#include <stdio.h>

/**
 * main - Print the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, a1;

	for (a = '0'; a <= '9'; a++)
	{
		for (a1 = '0'; a1 <= '9'; a1++)
		{
			putchar(a);
			putchar(a1);
			if (a == '9' && a1 == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
