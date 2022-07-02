#include <stdio.h>

/**
 * main- print alphabet in lowercase and uppercase
 *
 * Return: always 0
 */

int main(void)
{
	char alph_l;
	char alph_u;

	alph_l = 'a';

	while (alph_l <= 'z')
	{
		putchar(alph_l);
		alph_l += 1;
	}

	alph_u = 'A';

	while (alph_u <= 'Z')
	{
		putchar(alph_u);
		alph_u += 1;
	}

	putchar('\n');

	return (0);
}
