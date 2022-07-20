#include "main.h"
/**
 * _print_rev_recursion- function that prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = i - 1;
	if (i < 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_print_rev_recursion(&s[i - 1]);
	}
}
