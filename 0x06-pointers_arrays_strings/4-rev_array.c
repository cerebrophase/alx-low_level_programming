#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
