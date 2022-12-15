#include <stdio.h>

/**
 * main - check code
 * A program that prints from 0 to 100
 * prints Fizz for multiples of 3
 * prints Buzz for multiples of 5
 * prints FizzBuzz for multiples of 3 & 5
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if ( i % 5 == 0)
        {
            printf("Buzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return (0);
}

