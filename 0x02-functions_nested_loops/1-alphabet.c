#include "holberton.h"

/**
 * main - printing the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char s[] = "abcdefghigklmnopqrstuvwxyz\n";
	unsigned int i = 0;

	while (i <= 26)
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
