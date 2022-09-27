#include "main.h"

/**
 * print_alphabet_x10 - alphabet ten times followed by a new line
 * description - print alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
