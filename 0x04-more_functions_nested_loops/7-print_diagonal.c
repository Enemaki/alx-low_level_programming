#include "main.h"

/**
 * print_diagonal- function draws a diagonal
 * @n: is the argument that determines,
 * the number of times the diagonal is printed
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && i > 0)
	{
		j = 0;
		if (i > j)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
