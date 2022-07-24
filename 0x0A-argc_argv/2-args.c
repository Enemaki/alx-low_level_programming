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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
