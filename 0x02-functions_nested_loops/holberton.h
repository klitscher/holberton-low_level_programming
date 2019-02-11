#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - printing the alphabet
 *
 * Return: 0
 */
int print_alphabet(void);

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 *
 * Return: 0
 */
int print_alphabet_x10(void);

/**
 * _islower - Checks to see if a character is lowercase
 * @c: The character to print
 * Return: 1 or 0
 */
int _islower(int c);

#endif /* _HOLBERTON_H_ */
