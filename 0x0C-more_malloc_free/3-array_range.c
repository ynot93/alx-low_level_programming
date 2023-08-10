#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers using calloc.
 * @min: Smallest value of the array.
 * @max: Largest value of the array.
 *
 * Return: NULL if memory allocation fails,
 *         A pointer to the newly formed array.
 */

int *array_range(int min, int max)
{
	int *array, i, count;

	if (min > max)
		return (NULL);

	count = max - min + 1;

	array = malloc(count * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++)
		array[i] = min;

	return (array);
}
