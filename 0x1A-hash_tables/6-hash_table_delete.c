#include "hash_tables.h"

/**
 * hash_table_delete - Deletes everything in a hash table.
 * @ht: The hash table to be deleted.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next_node, *current_node;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
