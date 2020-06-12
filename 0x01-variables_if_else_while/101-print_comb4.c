#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a, a2, a3;

	a2 = '0';
	a3 = '0';
	for (a = '0'; a < '9'; a++)
	{
		for (a2 = a + 1; a2 <= '9'; a2++)
		{
			for (a3 = a2 + 1; a3 <= '9'; a3++)
			{
				putchar(a);
				putchar(a2);
				putchar(a3);
				if (a == '7' && a2 == '8' && a3 == '9')
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
