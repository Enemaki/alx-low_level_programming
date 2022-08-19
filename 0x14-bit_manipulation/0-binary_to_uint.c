#include "main.h"
/**
 * myatoi- convert a string to an int
 * @s: string value
 * Return: integer value
 */
unsigned int myatoi(const char *s)
{
	unsigned int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}
/**
 * binary_to_uint- function that converts a binary number
 * to an unsigned int
 * @b: string variable
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num, decimal_num = 0, base = 1, rem;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
	}
	num = myatoi(b);
	while (num > 0)
	{
		rem = num % 10;
		decimal_num = decimal_num + rem * base;
		base = base * 2;
	}
	return (decimal_num);
}
