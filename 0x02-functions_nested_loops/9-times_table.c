#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the 9 times table in a specific format.
 *              The table starts with 0 and goes up to 9, multiplying each
 *              number by the numbers from 0 to 9.
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;
			if (column == 0)
			{
				printf("%d, ", result);
			}
			else
			{
				printf("%2d", result);
				if (column != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
