#include "hash_tables.h"

/**
 * hash_table_set - Adds an element into the hash table.
 * @ht: The hash table you want to update.
 * @key: The reference to the value in the key-value pair.
 * @value: The data associated to the key.
 *
 * Return: 0 if it fails,
 *         1 if it succeeded.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long int index;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
