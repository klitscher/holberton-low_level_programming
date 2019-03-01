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
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (**(argv + i) < '0' || **(argv + i) > '9')
		{
			printf("ERROR\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
