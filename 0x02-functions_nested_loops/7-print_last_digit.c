#include "main.h"

/**
 * print_last_digit - print the last digit
 * description - print the last digit of a unknown
 * @x: unknown number
 * Return: returns value of the last digit
 */
int print_last_digit(int x)
{
	x %= 10;

	if (x < 0)
		x = -x;

	_putchar(x + '0');

	return (x);
}
