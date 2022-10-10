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
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c < a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
