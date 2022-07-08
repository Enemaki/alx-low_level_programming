#include "main.h"

/**
 * _isdigit- function checks for a digit (0-9)
 * @c: is the argument which the functions collects
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
