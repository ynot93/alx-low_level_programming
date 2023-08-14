#ifndef DOG_H
#define DOG_H

#define NULL ((void *)0)

/**
 * struct dog - Structure containing elements about a dog.
 * @name: Represents the name of the dog.
 * @age: Represents the age of the dog.
 * @owner: Represents the owner of the dog.
 *
 * Description: Describes a dog with the elements name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
