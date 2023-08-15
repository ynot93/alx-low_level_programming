#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Performs cleanup by freeing the program of allocated
 *            memory.
 * @d: Pointer to access struct dog.
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
