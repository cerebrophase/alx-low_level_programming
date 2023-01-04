#include "main.h"

/**
 * is_prime_number - test for prime numbers
 * @n: input integer
 * Return: 1 if n is prime number, else return 0
 */

int is_prime_number(int n)
{
	if ((n % 2 == 1 || n % 3 == 1 || n % 5 == 1) && (n % 1 == n))
		return (1);
	else
		return (0);
}

