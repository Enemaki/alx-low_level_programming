#include <stdio.h>
#include "main.h"
/**
 * main- program that prints its name, followed by a new line
 * @argc: count of arguments
 * @argv: array of arguments to main
 * Return: program name
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = argv[argc - 2] + argv[argc - 1];
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
