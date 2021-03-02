#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free two dimentional array
 * @grid: grid pointer
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
