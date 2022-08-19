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
	unsigned long int num;

	num = n;
	for (i = 0; i < index; i++)
	{
		if (i = index)
		{
			if ((num & 1) == 1)
			{
				return (1);
				break;
			}
			if ((num & 1) == 0)
			{
				return (0);
				break;
			}
		}
		num = num >> 1;
	}
	return (-1);
}
