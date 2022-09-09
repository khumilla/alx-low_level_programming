#include <stdio.h>

/**
 * main - print single digit numbers with a base of 10
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
