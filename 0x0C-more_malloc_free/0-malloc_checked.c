#include "main.h"
/**
 * malloc_checked- function that allocates memory using malloc
 * @b: integer parameter
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
