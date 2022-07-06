#include "main.h"
/**
 * _isalpha- checks for alphabetic character
 * @c: is the int that will use for the argument of the function
 * Return: always 0
 */

int _isalpha(int c)
{
	if (c >= ('a' || 'A') && c <= ('z' || 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
