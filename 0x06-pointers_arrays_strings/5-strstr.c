#include "holberton.h"
#define NULL 0
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: what you are searching for
 *
 * Return: pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *ned = needle;

	while (*hay != '\0')
	{
		while (*ned != '\0')
		{
			if (*ned == *hay)
			{
				ned++;
				hay++;
				if (*ned == '\0')
					return (haystack);
			}
			else
				break;
		}
		ned = needle;
		hay++;
		haystack++;
	}
	return (NULL);
}
