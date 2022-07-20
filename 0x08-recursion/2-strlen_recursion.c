#include "main.h"
/**
 * _strlen_recursion- function that returns the length of a string
 * @s: string to be used
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int length, i = 0;

	length = 0;

	if (s[i] != '\0')
	{
		length += 1;
		_strlen_recursion(&s[i + 1]);
	}
	return ('\n');
}
