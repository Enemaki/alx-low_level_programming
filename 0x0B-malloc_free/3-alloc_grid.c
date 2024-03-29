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
	int **array, i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			while (i-- >= 0)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
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
