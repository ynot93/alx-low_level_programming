#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table.
 * @size: Size of the table.
 *
 * Return: Pointer to the newly created table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	create_table = malloc(sizeof(hash_table_t));

	if (create_table == NULL)
		return (NULL);

	create_table->size = size;
	create_table->array = malloc(sizeof(hash_node_t *) * size);

	if (create_table->array == NULL)
	{
		free(create_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		create_table->array[i] = NULL;
	}

	return (create_table);
}
