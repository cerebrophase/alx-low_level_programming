#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: number to find square root of
 * Return: square root of number, -1 for non natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer parameter
 * @i: integer parameter
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (i * i < n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

