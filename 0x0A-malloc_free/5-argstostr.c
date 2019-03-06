#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - Function to find the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
/**
 * argstostrstr - concatenates two strings
 * @ac: argument count
 * @av: user argument to concatenate
 *
 * Return: a pointer to the address of the newly allocated concat string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	p = (char *) malloc((ac - 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		p[i] = (char *) malloc(_strlen(av[i + 1]) * sizeof(char));
		if (p[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < ac; i++)
		for (j = 0; j < _strlen(av[i + 1]); j++)
			{
				*p = **av;
				av++;
				p++;
			}
	return(p);
}
