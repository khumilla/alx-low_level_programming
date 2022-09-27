#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: the chessboard
 * Return: a chessboard
 */

void print_chessboard(char (*a)[8])
{
	int chess, board;

	for (int chess = 0; a[chess][7]; chess++)
	{
		for (board = 0; board < 8; board++)
			_putchar(a[chess][board]);

		_putchar('\n');
	}
}
