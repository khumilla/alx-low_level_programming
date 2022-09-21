#include "main.h"

/**
 * strcpy - copy string pointed to by src
 * description - strcpy function
 * @dest: destination
 * @src: source code
 * Return: the pointner to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
