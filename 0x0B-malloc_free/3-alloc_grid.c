#include "holberton.h"
#include <stdlib.h>
/**
 * *alloc_grid - Returns a pointer to a 2 dimensional
 * @width: width of the grid
 * @height: height of the grid
 * Return: Grid
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int a, b;

	if (width <= 0 || height <= 0)
		return (0);
	p = malloc(sizeof(int *) * height);
	if (p == '\0')
		return (0);
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);
		if (p[a] == '\0')
		{
			free(p);
			for (b = 0; b <= a; b++)
				free(p[b]);
			return (0);
		}
		for (b = 0; b < width; b++)
			p[a][b] = 0;
	}
	return (p);
}
