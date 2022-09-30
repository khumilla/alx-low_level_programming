#include <stdio.h>
#include "main.h"

/**
 * main - program prints number of arguments passed
 * @argc: counting number of arguments
 * @argv: arguments being counted
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
