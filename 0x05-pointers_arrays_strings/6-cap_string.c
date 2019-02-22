#include "holberton.h"

/**
 * cap_string - capitalize all the words of a string
 * @str: string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	char a[] = " \t\n,;.!?\"(){}";
	int i, j;


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0  && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				i++;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
				else
				{
					i++;
					if (str[i] >= 97 && str[i] <= 122)
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
	}
	return (str);
}
