#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string
 * @accept: another string with bytes being searched
 * Return: pointer to bytes in s that matches accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
