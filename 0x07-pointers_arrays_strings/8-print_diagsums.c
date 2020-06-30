#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print two diagonals of a square
 * @a: array
 * @size: size
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int r1, r2, c;

	r1 = 0;
	r2 = 0;
	for (c = 0; c < size; c++)
	{
		r1 += a[c * (size + 1)];
		r2 += a[(c + 1) * (size - 1)];
	}
	printf("%d, %d\n", r1, r2);
}
