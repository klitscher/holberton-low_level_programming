#include "holberton.h"

/**
 * print_times_table - Creates the times tables
 * @n: User input
 *
 * Return: no return value
 */
void print_times_table(int n)
{
	int r = 0, c = 0, num;

	if (n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				num = r * c;
				if (c == 0)
					_putchar(num + '0');
				else if ((r * c) <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if ((r * c) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num / 100) + '0');
					_putchar(((num / 10) % 10) + '0');
					_putchar((num % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
			c = 0;
			_putchar('\n');
		}
	}
}
