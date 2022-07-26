#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- function that returns a pointer to
 * a newly allocated space in memory
 * @str: string parameter to be duplicate
 * Return: pointer or Null
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count])
	{
		count++;
	}
	count++;
	new_str = malloc(sizeof(char) * count);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; (i < count - 1); i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
