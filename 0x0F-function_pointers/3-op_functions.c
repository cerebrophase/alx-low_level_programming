#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first no
 * @b: second no
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first no
 * @b: second no
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first no
 * @b: second no
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient
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
 * op_mod - find the remainder of division of by b
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n");
	exit(100);
	return (a % b);
}

