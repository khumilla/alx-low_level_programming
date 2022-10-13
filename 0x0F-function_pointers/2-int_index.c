#include "function_pointer.h"

/**
 * int_index - function that searches for an integer
 * @array: array of elements
 * @size: number of elements in array
 * @cmp: pointer to function to compare values.
 * 
 * Return: index of first element != 0
 * if no element matches -1 
 * or size if <= 0; -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

