#include "main.h"
/**
 * print_alphabet- function prints alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
