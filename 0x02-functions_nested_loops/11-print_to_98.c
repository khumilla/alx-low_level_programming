#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * description - print to 98 with _putchar
 * @n: unknown number
 * Return: numbers n -98
 */
void print_to_98(int n)
{

	if (n <= 98)
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	else
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}

	printf("98\n");
}


