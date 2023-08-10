#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates a block of memory using malloc.
 * @b: Size in bytes of memory to be allocated.
 *
 * Return: Exit with staus value 98 if allocation fails,
 *         Pointer to allocated memory if successful.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
