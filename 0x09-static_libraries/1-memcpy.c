#include "main.h"
/**
 * _memcpy- function copies n bytes from memory area src to memory area dest
 * @dest: char memory location where n copied to
 * @src: char memory location where n is copied from
 * @n: integer byte to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
