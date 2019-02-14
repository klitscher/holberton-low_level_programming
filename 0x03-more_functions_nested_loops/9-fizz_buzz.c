#include <stdio.h>

/**
 * main - fizz buzzzzzzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
			printf("FizzBuzz ");
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
			if (i == 100)
			  printf("\n");
		}
		else if ((i % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
