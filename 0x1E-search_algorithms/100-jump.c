#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - Searches for a value using jump search algorithm.
 * @array: Array to search the value in.
 * @size: Number of elements in the array.
 * @value: Number to search for.
 *
 * Return: index of value located or -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev;
	size_t i, left;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	prev = 0;

	while (array[(prev < size ? prev : size - 1)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += jump;

		if (prev >= size)
			break;
	}

	left = prev - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", left, prev);

	for (i = left; i < (prev < size ? prev : size); ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
