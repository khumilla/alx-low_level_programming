#include "main.h"

/**
 * _strncat - join two strings with n number of bytes
 *@dest: resulting string to be appended to
 *@src: string to be completed
 *@n: parameter to compare index to
* Return: joined string
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
