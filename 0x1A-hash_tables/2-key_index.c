#include "hash_tables.h"

/**
 * key_index - Finds the index of a key.
 * @size: size of the array of the table.
 * @key: The key(string) to hash
 *
 * Return: index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
