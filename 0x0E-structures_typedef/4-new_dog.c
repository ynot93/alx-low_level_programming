#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: Input of the string to be calculated.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The string to be copied to.
 * @src: The string to copy.
 *
 * Return: Nothing.
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - This is a function that creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner:  Owner of the dog.
 *
 * Description: Using the typedef dog_t as the new name for struct dog,
 *              create a new dog.
 *
 * Return: NULL if function fails, or pointer to new dog if otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len_owner, len_name;

	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	len_name = _strlen(name) + 1;
	n_dog->name = malloc(len_name);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	_strcpy(n_dog->name, name);

	len_owner = _strlen(owner) + 1;
	n_dog->owner = malloc(len_owner);

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	_strcpy(n_dog->owner, owner);

	n_dog->age = age;

	return (n_dog);
}
