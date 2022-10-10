#include "main.h"

/**
 * print_diagonal - draw a diagonal line with \
 * @n - number of slashes to get line
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
        int line, space;

        if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
