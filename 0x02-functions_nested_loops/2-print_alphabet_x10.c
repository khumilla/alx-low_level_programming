#include "main.h"

/**
 * print_alphabet - alphabet ten times followed by a new line
 * description - print alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 'a'
	char b = 'z'
	int i = 0;

	while (i <= 10)
		i++
	{
		while (a <= b)
			_putchar(a);
			a++;
	}
	return (0);
}
