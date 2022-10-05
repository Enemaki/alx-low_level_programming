#include "main.h"
/**
 * _puts- prints a string followed by a new line
 * @str: string parameter to be printed
 * Description: prints the string to stdout
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
