#include "holberton.h"

/**
 * rot13 - make a cipher
 * @str: string to rot
 *
 * Return: the rotted string
 */
char *rot13(char *str)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;
	for (i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; alp[j] != '\0'; j++)
		{
			if (alp[j] == str[i])
			{
				str[i] = ROT[j];
				break;
			}
		}
	}
	return (str);
}
