#include <stdio.h>
/**
 * main- print different combination of three digits
 *
 * Return: always 0
 */

int main(void)
{
	int i, j, k;
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9' k++)
			{
				if (((i < j) & (j < k)) & (k <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if((k < '9') | (j < '8') | (i < '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
}
