#include <stdio.h>

/**
 * main - Function to print single digits
 *
 * Return: 0;
 */
int main(void)
{
	int i;

	i = '0';

	while(i <= '9')
	{
		putchar(i);
		if (i < '9')
			putchar(',');
		if (i < '9')
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
