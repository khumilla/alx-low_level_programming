#include "main.h"

/**
 * _memcpy- function that copies memory
 * @n: unknown number of bytes
 * @src: memory area
 * @dest: memory area to be copied to
 * Return: point to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
