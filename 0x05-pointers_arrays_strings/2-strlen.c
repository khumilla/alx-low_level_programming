#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string in question
 * Return: length of the string as an int
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
