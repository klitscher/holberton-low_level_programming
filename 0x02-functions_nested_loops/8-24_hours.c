#include "holberton.h"

/**
 * jack_bauer - Prints out all the seconds of the day
 *
 * Return: 0;
 */
void jack_bauer(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';

	while (a <= '2')
	{
		while (b <= '9')
		{
			while (c <= '5')
			{
				while (d <= '9')
				{
					if (a == '0' || a == '1' || (a == '2' && b <= '3'))
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
