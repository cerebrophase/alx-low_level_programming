#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: the pointer to str
 */
char *leet(char *str)
{
	char replacements[] = {'4', '3', '0', '7', '1'};
	char low_characters[] = {'a', 'e', 'o', 't', 'l'};
	char upp_characters[] = {'A', 'E', 'O', 'T', 'L'};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == low_characters[j] || str[i] == upp_characters[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}
	return (str);
}
