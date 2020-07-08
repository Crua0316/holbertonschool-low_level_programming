#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Free all the memory address
 * @grid: array to free memory
 * @height: height of the grid
 * Return: No return
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
