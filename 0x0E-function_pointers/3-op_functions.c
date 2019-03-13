#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplys two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division of the two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulos two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
