#include "main.h"

/**
 * _puts - a function that prints a string to stdout followed by new line
 *@str: the string
 * Return: a string
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
