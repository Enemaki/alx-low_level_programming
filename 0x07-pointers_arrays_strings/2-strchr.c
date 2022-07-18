#include "main.h"
/**
 * _strchr- function that locates a character in a string
 * @s: char type string to be searched
 * @c: char type argument to be searched in c
 * Return: a pointer to the first occurrence of the character c in the string s
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
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
}
