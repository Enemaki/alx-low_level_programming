#include "main.h"
/**
 * flip_bits- function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to be flipped or -1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int result;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
