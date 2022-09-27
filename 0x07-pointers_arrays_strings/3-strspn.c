#include "main.h"

/**
 * _strspn - function that gets the length of prefix of substring
 * @s: input bytes
 * @accept:: input s
 * Return: number of byte in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++
				break;
		}
			else if (accept[r + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
