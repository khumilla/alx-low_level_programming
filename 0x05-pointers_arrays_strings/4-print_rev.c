#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: string to be printed
 * Return: reversed string
 */

void print_rev(char *s)
{
	int a, b;

	b = strlen(s);
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

