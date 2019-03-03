#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int num1;
	int num2;
	int mult;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			else if (argv[i][j] == '-' && j == 0)
				continue;
			else if (argv[i][j] == '+' && j == 0)
				continue;
			else
			{
				printf("ERROR\n");
				return (1);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);
	return (0);
}
