#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 - 100 followed by a new line;
 * prints Fizz for multiples of 3
 * prints Buzz for multiples ofr 5
 * prints FizzBuzz for multiples of both 3 and 5
 *
 * Return: always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
