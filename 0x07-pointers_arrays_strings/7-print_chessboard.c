#include "holberton.h"

/**
 * print_chessboard - Fills memory with a constant byte
 * @a: Pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
int b, c;

for (b = 0; b < 8; b++)
{
for (c = 0; c < 8; c++)
_putchar(a[b][c]);
if (c != 7)
_putchar(10);
}
}
