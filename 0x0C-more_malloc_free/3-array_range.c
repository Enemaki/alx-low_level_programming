#include "main.h"
/**
 * array_range- function that creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: pointer or Null
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j++] = i;
	}
	return (ptr);
}
