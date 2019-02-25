#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: prefix string
 * @accept: bytes that are allowed
 *
 * Return: number of bytes from intial segment s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *a1 = accept;

	while (*s != '\0')
	{
		while (*a1 != '\0')
		{
			if (*a1 == *s)
			{
				len++;
				break;
			}
				a1++;
		}
		if (*a1 == '\0')
			break;
		a1 = accept;
		s++;
	}
	return (len);
}
