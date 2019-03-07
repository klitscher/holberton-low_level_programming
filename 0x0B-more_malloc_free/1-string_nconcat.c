#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - Function to find the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: strig to add to s1
 * @n: number of bytes to add
 *
 * Return: pointer to the concatenated string (s1)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	char *concat1;
	unsigned int lengths1;
	unsigned int lengths2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lengths1 = _strlen(s1);
	if (n >= _strlen(s2))
	{
		lengths2 = _strlen(s2) + 1;
	}
	else
		lengths2 = n + 1;
	concat = malloc(sizeof(char) * (lengths1 + lengths2) + 1);
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
	while (lengths2 > 1)
	{
		*concat = *s2;
		lengths2--;
		concat++;
		s2++;
	}
	*concat = '\0';
	return (concat1);
}
