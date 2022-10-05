#include "main.h"
/**
 * _strspn- function that gets the length of a prefix substring
 * @s: char variable to be compared
 * @accept: char prefix substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n = 1;

			}
		}
		if (n == 0)
		{
			return (i);
		}
	}
	return (i);
}
