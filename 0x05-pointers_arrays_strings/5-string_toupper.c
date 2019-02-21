#include "holberton.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: a pointer
 *
 * Return: upecase things
 */
char *string_toupper(char *str)
{
	char *str_temp = str;

	for (; *str_temp != '\0'; str_temp++)
	{
		if (*str_temp >= 97 && *str_temp <= 122)
			*str_temp = *str_temp - 32;
	}
	return (str);
}
