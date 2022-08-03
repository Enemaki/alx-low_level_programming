#include "function_pointers.h"
/**
 * int_index- function that searches for an integer
 * @array: array argument of type int
 * @size: size of array
 * @cmp: function pointer that compares
 * Return: first index where cmp is not 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array & size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
