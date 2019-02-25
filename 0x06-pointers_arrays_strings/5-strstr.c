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

	while (*haystack != '\0')
	{
		hay = haystack;
		while (*ned != '\0' && *ned == *hay)
		{
			hay++;
			ned++;
		}
		if (*ned == '\0')
		{
			return (haystack);
		}
		ned = needle;
		haystack++;
	}
	return (NULL);
}
