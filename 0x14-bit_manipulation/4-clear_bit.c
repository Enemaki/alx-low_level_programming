#include "main.h"
/**
 * clear_bit- function that sets the value
 * of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index of bit to be replaced
 * Return: bit or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int rep;

	if (index > (sizeof(8) * 8))
		return (-1);
	rep = 0;
	rep = rep << index;
	*n = ((*n) & rep);
	return (1);
}
