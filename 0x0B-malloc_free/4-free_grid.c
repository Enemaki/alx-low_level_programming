#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- function that frees a 2 dimensional
 * grid previously created by your alloc_grid function
 * @grid: 2d array to be freed
 * @height: column of 2d array
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
