#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *new_s;
	int i, j, count1 = 1, count2 = 1;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		count2++;
	}
	new_s = malloc(sizeof(char) * (count1 + count2));
	for (i = 0; i < count1; i++)
	{
		new_s[i] = s1[i];
	}
	for (j = 0; j < count2; j++)
	{
		new_s[i] = s2[j];
		i++;
	}
	if (new_s == NULL)
	{
		return (NULL);
	}
	return (new_s);
}
