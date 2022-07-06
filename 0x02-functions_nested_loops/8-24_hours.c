#include "main.h"
/**
 * jack_bauer- function prints every minute of bauer's day
 * n from 00:00 to 23:59, min loop counts mins,
 * while hour loop counts hours and resets mins
 * Return: always 0
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h_r;
	int m_r;

	while (h <= 23)
	{
		while (m <= 59)
		{
			h_r = h % 10;
			m_r = m % 10;
			_putchar(h / 10 + '0');
			_putchar(h_r + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m_r + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}
