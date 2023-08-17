#include "function_pointers.h"

/**
 * int_index - Searches for an integer inside an array
 *             using a comparison function.
 * @array: The array to be iterated through.
 * @size: The size of the array to be iterated through.
 * @cmp: Function pointer to the comparison function.
 *
 * Return: Index of first element for which cmp does not return 0,
 *         -1 if no such element is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
