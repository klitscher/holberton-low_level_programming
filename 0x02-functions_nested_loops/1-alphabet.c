#include "holberton.h"

/**
 * print_alphabet - printing the alphabet
 *
 * Return: 0
 */
int print_alphabet(void)
{
	char s[] = "abcdefghigklmnopqrstuvwxyz\n";
	int i = 0;

	while (i <= 26)
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
