#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabt[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alphabt[i]);
	}
	putchar('\n');
	return (0);
}
