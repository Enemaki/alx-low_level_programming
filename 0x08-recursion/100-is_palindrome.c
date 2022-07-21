#include "main.h"
/**
 * _strlen_recursion- function that returns the length of a string
 * @s: string to be used
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	else
	{
		return (0);
	}
}
/**
 * pal- function compares two strings
 * @s: first string
 * @t: second string
 * Return: 0 or 1
 */
int pal(char *s, char *t)
{
	if (*s == *t)
	{
		return (pal((s + 1), (t + 1)));
		if (*s == '\0')
		{
			return (1);
		}
	}
	return (0);
}
/**
 * is_palindrome- checks if a string is a palindrome
 * @s: string to be compared
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	char *t;

	t = _strlen_recursion(s);
	return (pal(s, t));
}
