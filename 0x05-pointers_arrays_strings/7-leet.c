#include "holberton.h"

/**
 * leet - encodes a string
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char leet[] = "AaEeoOtTlL";
	char num[] = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = num[j / 2];
			}
		}
	}
	return (str);
}
