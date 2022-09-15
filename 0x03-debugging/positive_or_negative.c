#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - assigns a random number to int n everytime
 * description - and then prints it pos or neg
 * @b: unknown integer
 * Return: Always 0
 */
void positive_or_negative(void)
{
	int b = 0;

	if (b > 0)
		printf("%d is positive\n", b);
	else if (b == 0)
		printf("%d is zero\n", b);
	else if (b < 0)
		printf("%d is negative\n", b);
}
