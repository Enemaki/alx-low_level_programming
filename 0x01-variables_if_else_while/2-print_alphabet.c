#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Prints the alphabet in lowercase.
 * 
 * Return: Always 0
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
