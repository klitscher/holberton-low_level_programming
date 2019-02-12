#include "holberton.h"

/**
 * times_table - Creates the times tables
 *
 * Return: no return value
 */
void times_table(void)
{
	int n = 0;
	int i = 0;
	int num;
	/*int num2;*/

	while (n <= 9)
	{
		while (i <= 9)
		{
			num = n * i;
			if (num <= 9)
			{
				_putchar(num + '0');
				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			i++;
		}
		i = 0;
		_putchar('\n');
		n++;
	}
}
