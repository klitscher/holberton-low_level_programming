#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds two positive numbers
 * @argc: Number of arguments
 * @argv: Array of commands passed to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
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
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
