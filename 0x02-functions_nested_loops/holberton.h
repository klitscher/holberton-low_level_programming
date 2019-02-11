#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - printing the alphabet
 *
 * Return: 0
 */
int print_alphabet(void)
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

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz\n";
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

#endif /* _HOLBERTON_H_ */
