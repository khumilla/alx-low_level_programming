#include <stdio.h>

/**
 * main - print single digit numbers with base 10 from 0
 * followed by new line
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
