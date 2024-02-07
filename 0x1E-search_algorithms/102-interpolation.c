#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - Search for a value using interpolation
 *                        search algorithm.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value or -1 otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", low);
	return (-1);
}
