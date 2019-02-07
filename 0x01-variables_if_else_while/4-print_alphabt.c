#include <stdio.h>

/**
 * main - Function for writing all letters except some
 *
 * Return: - 0
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
