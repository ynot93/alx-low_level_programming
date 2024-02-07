#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search_2 - Searches for a value using binary search algo.
 * @array: Pointer to the array to search in.
 * @low: Lower bound value in the range.
 * @high: Higher bound value in the range.
 * @value: The value to search for.
 *
 * Return: Index of value to search for or -1 otherwise
 */
int binary_search_2(int *array, size_t low, size_t high, int value)
{
        size_t mid, i;

        if (array == NULL)
                return (-1);

        while (low <= high)
        {
                printf("Searching in array: ");
                for (i = low; i <= high; i++)
                {
                        printf("%d", array[i]);
                        if (i < high)
                                printf(", ");
                }
                printf("\n");

                mid = (low + high) / 2;

                if (array[mid] == value)
                        return (mid);
                else if (array[mid] < value)
                        low = mid + 1;
                else
                        high = mid - 1;
        }
        return (-1);
}

/**
 * exponential_search - Search for a value using exponential
 *                      search algorithm.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value or -1 otherwise.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_2(array, low, high, value));
}
