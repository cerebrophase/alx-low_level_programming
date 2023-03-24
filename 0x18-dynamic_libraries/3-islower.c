#include "main.h"

/**
 * _islower - returns 1 if c is lowercase
 *
 * @c: the character in ASCII mode
 *
 * Return: 1 for lowercase character, 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
