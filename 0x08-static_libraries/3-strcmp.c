#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -1, 0, or 1
 */
int _strcmp(char *s1, char *s2)
{
	int s1len;

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (*s1 - *s2);
	}
	else
	{
		for (s1len = 0; *s1 != 0; s1len++, s1++, s2++)
		{
			if (*s1 < *s2)
			{
				return (*s1 - *s2);
			}
			else if (*s1 > *s2)
			{
				return (*s1 - *s2);
			}
		}
		return (0);
	}
}
