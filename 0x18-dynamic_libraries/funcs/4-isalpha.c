#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letter, lowercase or uppercase. 0 for the rest
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
