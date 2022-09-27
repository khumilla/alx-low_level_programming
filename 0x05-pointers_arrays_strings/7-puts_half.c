#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half a string
 * @str: the string
 * Return: half the string
 */

void puts_half(char *str)
{
	int a, b, i;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (i = b; i < a; i++)
		_putchar(str[i]);
	_putchar('\n');
}


