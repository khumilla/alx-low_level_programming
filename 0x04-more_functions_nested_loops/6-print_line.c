#include "main.h"

/**
 * print_line - print character _ to print a straight line
 * @n: number of characters to print
 * Return: _ is n is greater than 0, new line otherwise
 */

void print_line(int n)
{
	int line;

	if ((n == 0) && (n < 0))
	{
		_putchar('\n');
	}
		for (line = 1; line <= n; line++)
		{
		_putchar('_');
		}
	_putchar('\n');
}
