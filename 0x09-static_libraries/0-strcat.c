#include <stdio.h>
#include "main.h"
/**
 * _strcat- function concatenates two strings
 * @dest: pointer of string type
 * @src: pointer of string type
 * Return: returns pointer to returning string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
