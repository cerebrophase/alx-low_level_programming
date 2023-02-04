#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: the converted number or 0 for error
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}




