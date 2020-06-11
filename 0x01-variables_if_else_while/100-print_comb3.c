#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, a2;

	a2 = '0';
	for (a = '0'; a < '9'; a++)
	{
		for (a2 = a + 1; a2 <= '9'; a2++)
		{
			if (a != a2)
			{
				putchar(a);
				putchar(a2);
				if (a == '8' && a2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
