#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string parameter to be duplicate
 * return: pointer or Null
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, count = 1;

	if (str = NULL)
	{
		return NULL;
	}
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			count++;
		}
		new_str = malloc(sizeof(char) * count);
		if (sizeof(new_str) < sizeof(str))
		{
			return (NULL);
		}
		else
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				new_str[i] = str[i];
			}
		}
	}
	return (new_str);
}
