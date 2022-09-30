#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print the result of the multiplication of 2 integers
 * @argc: arguments counted
 * @argv: arguments
 * Return: 1 and print error if not false, 0 if true
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
