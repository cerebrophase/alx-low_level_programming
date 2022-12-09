#include <stdio.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
