#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -function that allocates memory using malloc
 * @b: memory to be allocated in bytes
 * Return: pointer to allocated memory or 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
