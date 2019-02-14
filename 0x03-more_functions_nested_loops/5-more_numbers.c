#include "holberton.h"

/**
 * more_numbers - print numbers alot
 *
 * Return: void
 */
void more_numbers(void)
{
	int y;
	int x;

	for (y = 0; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
