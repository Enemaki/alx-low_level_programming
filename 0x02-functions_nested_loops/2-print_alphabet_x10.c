#include "main.h"
/**
 * print_alphabet_x10- function prints alphabets x10
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
