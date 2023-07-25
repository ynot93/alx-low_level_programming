#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array on integers.
 * @a: Pointer to an array whose elements are to be printed.
 * @n: Number of elements.
 *
 * Description: Prints elements of an array of integers, followed
 * by a new line where n is the number of elements of the array
 * to be printed. Numbers must be separated by a comma, followed
 * by a space.
 *
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
