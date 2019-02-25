#include "holberton.h"
#define NULL 0

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String to search in
 * @accept: String to search for
 *
 * Return: pointer to s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a1 = accept;

	while (*s != '\0')
	{
		while (*a1 != '\0')
		{
			if (*a1 == *s)
			{
				return (s);
			}
			a1++;
		}
		a1 = accept;
		s++;
	}
	return (NULL);
}
