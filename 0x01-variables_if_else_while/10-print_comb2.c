#include <stdio.h>

/**
 * main - Function to print two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			/*if ((a & b) != '9') THIS WAS MAGIC LUCK IT WORKED*/
			if (a != '9' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		b = '0';
		a++;
	}
	putchar('\n');
	return (0);
}
