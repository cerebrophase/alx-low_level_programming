#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: ASCII character to be checked
 * Return: 1 if c is uppercase, 0 for others
 */
int_isupper(int c)
{

	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
