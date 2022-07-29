#include "main.h"
/**
 * _realloc- function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer to old memory space
 * @old_size: old size of bytes
 * @new_size: new size of bytes
 * Return: pointer or Null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1 = NULL;
	char *p2 = NULL;
	char *p3 = NULL;
	int i;

	if (ptr == NULL)
	{
		p1 = malloc(new_size);
		if (p1 == NULL)
		{
			return (NULL);
		}
		return (p1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p2 = malloc(new_size);
	if (p2 != NULL)
	{
		p3 = (char *)ptr;
		for (i = 0; i < old_size; i++)
		{
			p2[i] = p3[i];
		}
		free(ptr);
		return (p2);
	}
	return (NULL);
}
