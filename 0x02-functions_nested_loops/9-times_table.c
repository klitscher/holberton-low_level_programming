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
	int num = 0;

	while (n <= 10)
	{
		while (i <= 10)
		{
			num = i * n;
			_putchar(num);
			_putchar(',');
			_putchar(' ');
			i ++;
		}
		i = 0;
		_putchar('\n');
		n++;
	}
}
