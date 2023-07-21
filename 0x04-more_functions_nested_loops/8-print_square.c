#include "main.h"

/**
 * print_square - Print a square of a given size
 * @size: The size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
