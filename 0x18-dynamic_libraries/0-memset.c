#include "main.h"
/**
 * _memset- function fills the first n bytes of the memory area pointed to by s
 * of the memory area pointed to by s
 * @s: pointer of type char
 * @b: variable of type char
 * @n: integer argument signifying byte size
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
