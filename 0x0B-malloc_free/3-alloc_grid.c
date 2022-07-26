#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- function that returns a pointer to a 2
 * dimensional array of integers
 * @width: column of array
 * @height: row of array
 * Return: Null or pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width == 0 || width < 0)
	{
		return (NULL);
	}
	if (height == 0 || height < 0)
	{
		return (NULL);
	}

	int **array;

	array = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
