#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: the pointer to dest
 */

char *cap_string(char *s)
{
	int i;
	int len = strlen(s);

	s[0] = toupper(s[0]);

	for (i = 1; i < len; i++)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"'
|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			s[i + 1] = toupper(s[i + 1]);
		}
	}
	return (s);
}
