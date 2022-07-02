#include <stdio.h>
/**
 * main- print numbers of base 16 in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int num;
	char alph;

	num = 0;
	alph = 'a';

	while (num <= 15)
	{
		if (num <= 9)
		{
			putchar(num);
			num++;
		}
		else
		{
			putchar(alph);
			alph++;
		}
	}
	putchar('\n');

	return (0);
}
