#include "main.h"
/**
 * _sqrt - finds square root of n
 * @n: integer argument
 * @i: test case for root
 * Return: square root of n
 */

int _sqrt(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (n < i * i)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - find natural square root of n
 * @n: number to square
 * Description: find square root of n using recursion
 * Return: square root of n or -1 if none
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
