#include "main.h"

/**
 * print_triangle - Prints a triangle using '#'
 * @size: Size of the triangle
 *
 * Description: This function prints a triangle using the '#' character. The
 * triangle has 'size' number of rows. If 'size' is 0 or less, the function
 * prints only a new line.
 */
void print_triangle(int size)
{
	int spaces;
	int hashes;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	
	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (hashes = 0; hashes < row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

