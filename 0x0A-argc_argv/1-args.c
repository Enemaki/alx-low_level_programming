#include <stdio.h>
/**
 * main- program that prints its name, followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments to main
 * Return: program name
 */

int main(int argc, char *argv[])
{
	int count = 0;

	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
