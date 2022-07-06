#include "main.h"
/**
 * main- print alphabets in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
	}
	_putchar('\n');
}
