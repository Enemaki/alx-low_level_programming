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
	char *str;

	if (size != 0)
	{
		str = malloc(sizeof(char) * size);
		str[0] = 'c';
		return (str);
	}

	return (NULL);
}
