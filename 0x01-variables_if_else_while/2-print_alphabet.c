#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main- entry point
 * Description: alphabets
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
