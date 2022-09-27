#include "main.h"

/**
 * _abs - find absolute value of an interger
 * description - find an absolute
 * @j: represents unknown integer
 * Return: absolute value of j
 */
int _abs(int j)
{
	if (j > 0 || j == 0)
	{
	return (j);
	}
	else
		return (j * -1);
}
