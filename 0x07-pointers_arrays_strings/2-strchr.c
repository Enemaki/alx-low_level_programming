#include "main.h"
/**
 * _strchr- function that locates a character in a string
 * @s: char type string to be searched
 * @c: char type argument to be searched in c
 * *description: searches string for a char
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (Null);
}
