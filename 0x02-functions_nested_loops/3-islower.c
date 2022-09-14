#include "main.h"

/**
 * _islower -> check for lowercase c
 *@c this is a character argument
 * Return: returns  if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
