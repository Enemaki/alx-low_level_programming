#include <stdio.h>
/*
 * main - entry point
 * description: print alphabet in lowercase
 * Return: return zero for success
 */
int main(void)
{
	char c;

	c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	return (0);
}
