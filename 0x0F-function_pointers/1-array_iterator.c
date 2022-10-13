#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a given function
 * given as a parameter on each element of an array
 * @size: size of the array
 * @action: pointer to functiuon to be used
 * @array: array
 *
 * Return: always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && size > 0 && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}

