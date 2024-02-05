#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Perform linear search algorithm in an array.
 * @array: Pointer to array to search.
 * @size: Number of elements in the array.
 * @value: Integer to search for.
 *
 * Return: Index of first array found or -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu]: [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
