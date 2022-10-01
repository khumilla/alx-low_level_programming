#include "main.h"

/**
 * print_diagonal - draw a diagonal line with \
 * @n - number of slashes to get line
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
        int line, space;

        if ((n == 0) && (n < 0))
        {
                _putchar('\n');
        }
                for (space = 1; space <= n; space++)
		{	
			_putchar(' ');
		
			for (line = 0; line <= n; line++)
			{
				_putchar(92);
			}
		_putchar('\n');
		}
        _putchar('\n');
}
