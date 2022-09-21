#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of array into integers
 * @n: number of elements in the array to be printed
 * @a: the array
 * Return: always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
		{
			printf(", ");
	}
	printf("\n");
	}
}

