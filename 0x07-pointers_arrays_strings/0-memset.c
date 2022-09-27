#include "main.h"

/**
 * _memset - fills the first bytes in the memory area pointed to by @s and @c
 * descritption - filling memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the character to fill the memorfy area above
 * @n: number of bytes to be filled
 * Return: a pointed to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
