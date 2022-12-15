#include "main.h"

/**
 * print_diagonal - prints diagonal on the terminal
 * @n: number of times '\' is printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i < n - 1)
			{
				_putchar(' ');
			}
			if (i == n - 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
