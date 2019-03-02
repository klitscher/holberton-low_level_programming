#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to make change
 * @argc: Number of arguments
 * @argv: Arguemnts enterd on commmand line
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
		for (i = 0; sum < atoi(argv[1]); i++)
			if (sum + 25 <= atoi(argv[1]))
			{
				sum = sum + 25;
				continue;
			}
			else if (sum + 10 <= atoi(argv[1]))
			{
				sum = sum + 10;
				continue;
			}
			else if (sum + 5 <= atoi(argv[1]))
			{
				sum = sum + 5;
				continue;
			}
			else if (sum + 2 <= atoi(argv[1]))
			{
				sum = sum + 2;
				continue;
			}
			else
				sum = sum + 1;
	printf("%d\n", i);
	return (0);
}
