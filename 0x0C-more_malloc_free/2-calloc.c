#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: byte size of arrays
 *
 * Return: if nmemb or size = 0 then calloc returns NULL
 * if malloc fails then calloc returns NULL.
 * returns pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *p;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	p = mem;

	for (index = 0; index < (size * nmemb); index++)
		p[index] = '\0';

	return (mem);
}
