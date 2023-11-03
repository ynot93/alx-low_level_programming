#include "hash_tables.h"

/**
 * hash_table_print - Prints the data in a hash table.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int index;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s':'%s'", current_node->key, current_node->value);
			current_node = current_node->next;
			printed = 1;
		}
	}
	printf("}\n");
}
