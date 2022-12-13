#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @r: integer to check for absolute value
 *
 * Return: 0
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	return (r);
}
