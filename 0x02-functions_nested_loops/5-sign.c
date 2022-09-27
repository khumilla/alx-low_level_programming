#include "main.h"

/**
 * print_sign - prints n under certain conditions
 * description - prints symbols accordingly
 * @n: is a unknown number
 * Return: - 1, 0 or -1 depending on conditions
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
