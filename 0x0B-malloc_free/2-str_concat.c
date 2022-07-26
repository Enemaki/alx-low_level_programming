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
	int i, j, count1 = 0, count2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[count1])
	{
		count1++;
	}
	while (s2[count2])
	{
		count2++;
	}
	count2++;
	new_s = malloc(sizeof(char) * (count1 + count2));
	if (new_s == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		new_s[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		new_s[j++] = s2[i++];
	}
	return (new_s);
}
