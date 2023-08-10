#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array using calloc.
 * @nmemb: Number of elements you want to allocate memory for.
 * @size: Size of the elements.
 *
 * Return: NULL if memory allocation failed,
 *         Pointer to array of elements if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total;
	void *array;

	total = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(total);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		((char *)array)[i] = 0;

	return (array);
}
