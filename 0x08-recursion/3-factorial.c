#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: number to use
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
