#include "stdio.h"

/**
 * main- prints numbers from 0 to 100
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%i", i);
			printf(" ");
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
