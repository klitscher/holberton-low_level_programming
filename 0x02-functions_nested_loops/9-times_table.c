#include "holberton.h"

/**
 * times_table - Creates the times tables
 *
 * Return: no return value
 */
void times_table(void)
{
	int r = 0;
	int c = 0;
	int num;
	/*int num2;*/

	while (r <= 9)
	{
		while (c <= 9)
		{
			num = r * c;
			if(c == 0)
			{
				_putchar(num + '0');
			}
			else if ((r * c) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			c++;
		}
		c = 0;
		_putchar('\n');
		r++;
	}
}
