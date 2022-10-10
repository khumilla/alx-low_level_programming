#include "main.h"

/**
 * print_triangle - funtions prints a triangle
 * @size: size of the triangle to be printed
 *
 * Return: a triangle from ascii 35
 * if size is 0 or less should print a new line
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b < size; b++)
		{
			_putchar(' ');
		}
		for (b = 1; b <= a; b++)
		{
			_putchar(35);
		}

		_putchar('\n');
	}
}
