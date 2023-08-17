#include "function_pointers.h"

/**
 * array_iterator - Performs a function on every element in an array.
 * @array: The array to be iterated through.
 * @size: The size of the array.
 * @action: Function pointer to act on every element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
