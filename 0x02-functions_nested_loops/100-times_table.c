#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number to print the times table
 *
 * Description: This function prints the n times table in a specific format.
 *              The table starts with 0 and goes up to n, multiplying each
 *              number by the numbers from 0 to n.
 *              If n is greater than 15 or less than 0, nothing is printed.
 */
void print_times_table(int n)
{
	int row, column, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column == 0)
			{
				printf("%d, ", result);
			}
			else
			{
				printf("%3d", result);
				if (column != n)
					printf(", ");
			}
		}
		printf("\n");
	}
}
