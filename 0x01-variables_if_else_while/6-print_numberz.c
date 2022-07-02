#include <stdio.h>
/**
 * main- print digit number in base 10
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
