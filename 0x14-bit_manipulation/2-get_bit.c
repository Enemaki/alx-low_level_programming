#include "main.c"
/**
 * get_bit- function that returns the value
 * of a bit at a given index
 * @n: number to be evaluated
 * @index: index from which bit is returned
 * Return: bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}

	return ((n & 1));
}
