#include "main.h"

/**
 * print_most_numbers- prints numbers from 0 to 9
 * except 2 and 4 followed by new line
 * Return: 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i + '0');
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}