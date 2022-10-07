#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates array of ints
 * @min: minimum value in array
 * @max: maximum value of array
 *
 * Return: pointer to newly created array
 * if min > max return NULL
 * if malloc fails return NULL
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
