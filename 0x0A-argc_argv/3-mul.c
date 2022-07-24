#include <stdio.h>
#include "main.h"
/**
 * main- program prints the sum of two numbers, followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments to main
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = argv[argc - 2] + argv[argc - 1];
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
