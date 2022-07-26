#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of integers
 * @c: character which string is initialized
 * Return: Null of pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		str = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
