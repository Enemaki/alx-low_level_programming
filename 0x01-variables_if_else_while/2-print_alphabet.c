#include <stdio.h>
/*
 * main - entry point
 * Description: Alphabets
 * Return: zero on success
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
