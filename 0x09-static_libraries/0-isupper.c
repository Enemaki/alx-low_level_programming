#include "main.h"

/**
 * _isupper- functions checks if character,
 * is in upper or lowercase
 * @c: is the int used for the argument of the function.
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
