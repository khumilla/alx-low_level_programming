#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements in the array
 * Return: reverse of array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
