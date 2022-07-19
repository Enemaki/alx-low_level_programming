#include "main.h"
/**
 * _strstr- function that locates a substring
 * @haystack: string haystack to be searched
 * @needle: string used for searching
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] == '\0'; i++)
	{
		for (j = 0; needle[j] == '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack[i]);
			}
		}
	}
	return (NULL);
}
