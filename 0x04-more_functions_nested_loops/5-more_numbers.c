#include "main.h"

/**
 * more_numbers - print numbers 1-4
 * description - print 10 times
 * Return: printed lines
 */

void more_numbers(void)
{
	int n, count;

	for (count = 0; count <= 9; count++)
	{
	for (n = 0; n <= 14; n++)
	{
	if (n > 9)
	{
		_putchar((n / 10) + '0');
	}
	_putchar(n % 10 + '0');
	}
	_putchar('\n');
	}
}
