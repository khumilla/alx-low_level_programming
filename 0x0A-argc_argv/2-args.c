#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments received. one argument per line.
 * @argc: count arguments
 * @argv: arguments to be counted
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
