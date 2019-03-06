#include <stdlib.h>
#include "holberton.h"

/**
 * _allstrlen - Function to find the length of a string
 * @ac: The numbers of strings
 * @av: The string count
 *
 * Return: The length of the string
 */
int _allstrlen(int ac, char **av)
{
	int y, x;
	int cnt = 0;

	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x] != '\0'; x++, cnt++)
		{
		}
	}
	return (cnt);
}
/**
 * argstostr - concatenates two strings
 * @ac: argument count
 * @av: user argument to concatenate
 *
 * Return: a pointer to the address of the newly allocated concat string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j;
	int c = 0;
	int total = _allstrlen(ac, av);

	if (ac == 0 || av == NULL)
		return (NULL);
	p = malloc(total + ac + 1);
	if (p == NULL)
		return (NULL);
	/* copying the strings from command line to the value p is pointing to */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, c++)
		{
			p[c] = av[i][j];
		}
		/* Adding the newline & skipping it so loop does not replace */
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
