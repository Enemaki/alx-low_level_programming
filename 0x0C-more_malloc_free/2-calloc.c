#include "main.h"
/**
 * _calloc- function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer
 * to the allocated memory
 * @nmemb: number of elements in array
 * @size: size of array
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	str = (char *)malloc(j);
	if (str != NULL)
	{
		for (i = 0; i < j; i++)
		{
			str[i] = 0;
		}
		return (str);
	}
	return (NULL);
}
