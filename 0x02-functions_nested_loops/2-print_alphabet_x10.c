#include "holberton.h"

/**
 * main - printing the alphabet
 *
 * Return: 0
 */
int main(void)
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
