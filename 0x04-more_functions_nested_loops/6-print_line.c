#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times the _ is printed
 */

void print_line(int n)
{
	for (n = 15; n > 0; n--)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
}
