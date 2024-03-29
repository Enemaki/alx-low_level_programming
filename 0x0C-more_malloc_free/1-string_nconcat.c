#include "main.h"
/**
 * string_nconcat- function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer value for s2
 * Return: pointer or Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	str =  malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (; i < (len1 + n); i++)
	{
		str[i] = s2[i - len1];
	}
	str[i] = '\0';
	return (str);
}
