#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to encode
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (s[i] == j)
			{
				s[i] = (s[i] - 'A' + 13) % 26 + 'A';
				break;
			}
		}
		for (j = 'a'; j <= 'z'; j++)
		{
			if (s[i] == j)
			{
				s[i] = (s[i] - 'a' + 13) % 26 + 'a';
				break;
			}
		}
	}
	return (s);
}
