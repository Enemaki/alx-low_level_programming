#include "main.h"
#include <stdio.h>
/**
 * _strncat- funtion concatenates two strings
 * @dest: string parameter
 * @src: string parameter
 * @n: int parameter to determine byte size
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
