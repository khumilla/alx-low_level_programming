#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: the string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	int a, string1, string2;
	char tmp;

	string1 = 0;
	string2 = 0;

	while (s[string1] != '\0')
		string1++;

	string2 = string1 - 1;
	for (a = 0; a < string1 / 2; a++)
	{
		tmp = s[a];
		s[a] = s[string2];
		s[string2] = tmp;
		string2 -= 1;
	}
}
