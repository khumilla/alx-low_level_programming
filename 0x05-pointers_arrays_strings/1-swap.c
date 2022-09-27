#include "main.h"

/**
 * swap_int - function to swap the value of two integers
 *@a: first inetger
 *@b: second integer
 * Return: always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
