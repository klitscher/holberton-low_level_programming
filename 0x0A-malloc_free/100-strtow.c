#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k = 0, strlen = 0;
	char **array;

	/*find the length of the characters in the string*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'H' || str[i] == 'S' || str[i] == '#')
		{
			printf("Enter the if statement");
			j = i;
			for (; str[j] != ' '; j++, strlen++)
			{
			}
			printf("%d\n", strlen);
		}
	}
	printf("%d\n", strlen);
	/* Allocating memory for new array */
	array = malloc(sizeof(char *) * strlen + 3);
	/* Fill the array with the charactres */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'H' || str[i] == 'S' || str[i] == '#')
		{
			for (j = 0; str[j] != ' '; j++, k++)
			{
				array[i][j] = str[j];
				printf("%c", array[i][j]);
			}

		}
	}
	return (array);
}
