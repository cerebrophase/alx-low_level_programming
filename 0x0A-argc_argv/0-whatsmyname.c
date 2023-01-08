#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file name
 * @argc: first argument
 * @argv: second argument
 * Description: a program that prints its name
 * Return: Always (0) Success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
