#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value using advanced
 *                   binary search algorithm.
 * @array: Pointer to the array.
 * @size: Number of elememnts in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if otherwise.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Helper function for advanced_binary.
 * @array: Pointer to the array.
 * @start: Starting index of the array.
 * @end: Ending index of the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if otherwise.
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (start > end)
		return (-1);

	printf("Searching in array:");
	for (i = start; i <= end; ++i)
		printf(" %d", array[i]);
	printf("\n");

	mid = start + (end - start) / 2;

	if (array[mid] == value)
	{
		while (mid > start && array[mid - 1] == value)
			mid--;
		return (mid);
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1 , end, value));
	else
		return (advanced_binary_recursive(array, mid - 1 , end, value));
}
