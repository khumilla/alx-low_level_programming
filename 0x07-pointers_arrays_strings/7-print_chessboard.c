#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: the chessboard
 * Return: a chessboard
 */

void print_chessboard(char (*a)[8])
{
	int chindex; 
	int bindex;

	for (; a[chindex][7]; chindex++)
	{
		for (; bindex < 8; bindex++)
			_putchar(a[chindex][bindex]);
	}
		_putchar('\n');
}
