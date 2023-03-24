#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: ASCII character to be checked
 * Return: 1 if c is uppercase, 0 for others
 */

int _isupper(int c)
{

	if (c < 91 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
