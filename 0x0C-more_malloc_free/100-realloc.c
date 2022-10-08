#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function to reallocate memory block using malloc free
 * @ptr: pointer to memory previously allocated
 * @old_size: allocated space for ptr in bytes
 * @new_size: new memory block in bytes
 *
 * Return: copied contents from ptr to min old and new size
 * if new size == old size return ptr
 * if new size > old size not initialized
 * if new size is 0 and ptr is not NULL, return NULL;
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *realloc;
	unsigned int index;

	if (ptr != NULL)
		ptr1 = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (NULL);
	for (index = 0; index < (new_size || old_size); index++)
	{
		*(realloc + index) = ptr1[index];
	}

	free(ptr)
	return(realloc)
}
