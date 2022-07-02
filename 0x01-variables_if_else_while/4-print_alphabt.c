#include <stdio.h>
/**
 * main- print alphabet in lowercase except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z' && !('q' || 'e'))
	{
		putchar(alph);
		alph += 1;
	}
	putchar('\n');

	return (0);
}
