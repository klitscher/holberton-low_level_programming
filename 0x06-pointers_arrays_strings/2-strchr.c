#include "holberton.h"
#define NULL 0

/**
 * _strchr - locates a character in string
 * @s: string to be searched
 * @c: CHaracter to be searched for
 *
 * Return: Pointer to first occurence, or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
