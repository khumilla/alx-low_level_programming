#include "main.h"

/**
 * print_diagonal - draw a diagonal line with \
 * @n - number of slashes to get line
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
	for (line = 0; l <= n; line++)
	{
	for (space 0; space <= line; space++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	if (line == n - 1)
	{
	continue;
	}
	_putchar('\n');
	}
	_putchar('\n');
	}
}
