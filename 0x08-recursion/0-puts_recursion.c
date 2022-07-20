#include "main.h"

/**
 * _puts_recursion- function that prints a string,
 * followed by a new line
 * @s: string value to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = *(s + i);
		_putchar(j);
	}
	_putchar('\n');
}
