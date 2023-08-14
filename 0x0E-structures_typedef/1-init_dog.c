#include "dog.h"

/**
 * init_dog - Initializes a tructure called dog.
 * @d: Pointer to iterate through the structure dog.
 * @name: References the name of the dog.
 * @age: References the age of the dog.
 * @owner: References the owner of the dog.
 *
 * Description: The function initializes the structure dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
