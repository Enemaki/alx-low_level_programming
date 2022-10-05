#include <stdio.h>
#include "main.h"
/**
 * _strlen- function returns the length of a string
 * @s: string parameter to be printed
 * Return: void
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
