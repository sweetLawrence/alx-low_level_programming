#include "main.h"
/**
 * print_chessboard - to print chess board
 * @a: array of chars
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int c1;
	int c2;

	for (c1 = 0; c1 < 8; c1++)
	{
		for (c2 = 0; c2 < 8; c2++)
			_putchar(a[c1][c2]);
		_putchar('\n');
	}
}
