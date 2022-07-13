#include <stdio.h>
/**
 * swap_int- swap values of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
