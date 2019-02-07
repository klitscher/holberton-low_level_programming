#include <stdio.h>

/**
 * main - Function prints all base 16 numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char h;

	i = '0';
	h = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
