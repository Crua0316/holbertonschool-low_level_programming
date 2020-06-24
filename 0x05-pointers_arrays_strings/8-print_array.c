#include "holberton.h"
#include <stdio.h>

/**
 *print_array - print n elements of an arrays of integers
 *@a: String
 *@n: Var
 */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);
		b++;
			if (b != n)
			putchar(44);
		putchar(32);
	}
	putchar(10);
}
