#include "holberton.h"

/**
 * print_alphabet_x10 - printing the alphabet
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
	char s[] = "abcdefghigklmnopqrstuvwxyz\n";
	int a = 0;

	while (a < 10)
	{
		unsigned int i = 0;

		while (i <= 26)
		{
			_putchar(s[i]);
			i++;
		}
		a++;
	}
	return (0);
}
