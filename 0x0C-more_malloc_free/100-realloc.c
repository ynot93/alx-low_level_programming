#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block on heap using malloc and free.
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size of the allocated space denoted by ptr.
 * @new_size: Size of nely allocated memory block.
 *
 * Return: NULL on failure of any sort,
 *         Pointer to newly allocated memory space.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *re_alloc;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		new_size = old_size;
	}

	re_alloc =  malloc(new_size);

	if (re_alloc == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < new_size; i++)
	{
		*((char *)re_alloc + i) = *((char *)ptr + i);
	}
	free(ptr);

	return (re_alloc);
}
