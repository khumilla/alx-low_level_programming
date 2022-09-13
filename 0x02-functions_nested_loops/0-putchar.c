#include "main.h"

/**
 * main - program with _putchar
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char a[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar (a[i]);
	}
	_putchar ('\n');
	return (0);
}
