#include <stdio.h>

/**
 * main - Function to print alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char z;

	z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
