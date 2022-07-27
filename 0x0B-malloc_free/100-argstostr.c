#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr- function that concatenates
 * all the arguments of your program
 * @ac: count of all arguments
 * @av: array pointer to strings
 * Return: null or pointer
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			count++;
		}
	}
	count++;
	str = malloc(sizeof(**av) * (count + ac));
	if (str == NULL)
	{
		return (NULL);
	}
	count = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[count++] = av[i][j++];
		}
		str[count++] = '\n';
	}
	str[count] = '\0';
	return (str);
}
