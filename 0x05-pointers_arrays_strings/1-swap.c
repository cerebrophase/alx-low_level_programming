#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer1 to be swapped
 * @b: integer2 to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
