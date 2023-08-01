#include "main.h"

/**
 * print_chessboard - Prints a chessboard using 2D arrays
 * @a: Pointer to the 2D array repersenting the chess board
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
