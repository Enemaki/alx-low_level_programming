#include "variadic_functions.h"
/**
 * print_numbers- function that prints numbers,
 * followed by a new line
 * @separator: argument separator
 * @n: argument of type int
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	if (n == 0)
	{
		return;
	}
	
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			printf("%c", *separator);
		}
	}
	va_end(ap);
}
