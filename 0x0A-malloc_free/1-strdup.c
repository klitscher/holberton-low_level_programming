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
 * _strdup - Copy a string
 * @str: String to be copied
 *
 * Return: A pointer to a the newly copied string.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len;

	if (str == NULL)
		return (NULL);
	len= _strlen(str);
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	/*Filling the array with the same characters as the string passed*/
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
