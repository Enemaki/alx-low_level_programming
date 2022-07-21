#include "main.h"
/**
 * prime_num - determine if n is a prime
 * @n: test case*
 * @i: recurring factors
 * Description: determines if n is a prime using 2 parameters
 * Return: 1 if n is a prime, 0 if not
 */

int prime_num(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n >= (i + 1) * (i * 1))
	{
		return (prime_num(n, i + 1));
	}
	return (1);
}

/**
 * is_prime_number- function that returns 1 if the input
 * integer is a prime number otherwise return 0
 * @n: integer number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (prime_num(n, 2));
}
