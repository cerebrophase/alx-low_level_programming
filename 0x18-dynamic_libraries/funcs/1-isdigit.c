#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: character to check for digit
 * Return: 1 if c is a digit, 0 for others
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
