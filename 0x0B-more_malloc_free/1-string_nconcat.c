#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - get the total length of the string
 * @s1: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s1)
{
	int i = 0;

	for (; s1[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * _newstr - get the length of the string to n bytes
 * @s2: string to get the length of
 * @n: number of bytes to get the length of
 *
 * Return: a pointer to the new string
 */
char *_newstr(char *s2, int n)
{
	int len = 0;
	int i = 0;
	char *newstring;

	/* Get length of the new string based on n bytes */
	for (; len < n && s2[i] != '\0'; i++, len++)
	{
	}
	if (s2[i] == '\0')
		len++;

	/* Allocate memory for newstring */
	newstring = malloc((len + 1) * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	/* Copy the value s2 is pointing towards into newstring */
	for (i = 0; n > 0 && s2[i] != '\0'; n--, i++)
	{
		newstring[i] = s2[i];
	}
	return (newstring);
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
	int i = 0, j = 0;
	char *catptr;
	char *news2;
	int lengths1 = 0;
	int lengths2 = 0;

	lengths1 = _strlen(s1);
	news2 = _newstr(s2, n);
        lengths2 = _strlen(news2);

	catptr = malloc((lengths1 + lengths2 + 1) * sizeof(char));
	if (catptr == NULL)
	{
		free (news2);
		return (NULL);
	}
	/*writing s1 into catptr */
	for (; s1[i] != '\0'; i++)
		catptr[i] = s1[i];
	for (; news2[j] != '\0'; j++, i++)
		catptr[i] = news2[j];
	free(news2);
	return (catptr);
}
