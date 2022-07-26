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
	int count = 0;

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
	count = 0;
	while (str[count])
	{
		new_str[count++] = str[count++];
	}
	return (new_str);
}
