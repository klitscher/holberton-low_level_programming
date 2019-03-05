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
 * str_concat - concatenates two strings
 * @s1: intial string
 * @s2: string to add
 *
 * Return: a pointer to the address of the newly allocated concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	char *concat1;
	int lens1;
	int lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = _strlen(s1);
	lens2 = _strlen(s2) + 1;
	concat = malloc((sizeof(char) * lens1) + sizeof(char) * lens2);
	if (concat == NULL)
		return (NULL);
	concat1 = concat;
	/* set *concat = *s1 */
	while (*s1 != 0)
	{
		*concat = *s1;
		concat++;
		s1++;
	}
	/* set the rest of *concat = *s2 */
	while (lens2 > 0)
	{
		*concat = *s2;
		lens2--;
		concat++;
		s2++;
	}
	return (concat1);
}
