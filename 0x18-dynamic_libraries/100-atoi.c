#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		sign = +1;
		s++;
	}
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			/**
			 * Return 0 if the string contains non-digit
			 * characters return 0;
			 */
			return (0);
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	/**
	 * Apply the sign to the result
	 * return sign * result;
	 */
	return (sign * result);
}

