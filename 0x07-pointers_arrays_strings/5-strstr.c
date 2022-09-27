#include "main.h"

/**
 * _strstr - function that locates substring
 * @needle: substringi in haystack to be found
 * @haystack: string being searched for needle
 * Return: pointer to the beginning of substring; null is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
