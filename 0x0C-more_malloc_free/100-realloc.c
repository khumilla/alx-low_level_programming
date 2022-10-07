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
	void *mem;
	char *ptr1, *pnt;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	ptr1 = ptr;
	mem = malloc(sizeof(*ptr1) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	pnt = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		pnt[index] = *ptr1++;

	free(ptr)
		return (mem);
}
