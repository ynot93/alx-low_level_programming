#include "hash_tables.h"

/**
 * shash_table_create - Initializes a sorted hash table.
 * @size: size of the table.
 *
 * Return: Pointer to the table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 * shash_table_set - Insert key-value pair in sorted hash table.
 * @ht: Hash table to perform insertion on.
 * @key: The reference of the value in the pair.
 * @value: The data referenced by the key.
 *
 * Return: 0 if failed,
 *         1 if successful.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current_node, *new_node;
	unsigned long int index;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
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
	new_node = malloc(sizeof(shash_node_t));

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
	new_node->sprev = NULL;
	new_node->snext = NULL;
	ht->array[index] = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead = new_node;
		if (new_node->snext == NULL)
			ht->stail = new_node;
	}
	else
	{
		current_node = ht->shead;
		while (current_node->snext != NULL && strcmp(key, current_node->snext->key) > 0)
			current_node = current_node->snext;
		new_node->sprev = current_node;
		new_node->snext = current_node->snext;
		current_node->snext = new_node;

		if (new_node->snext != NULL)
			new_node->snext->sprev = new_node;
		else
			ht->stail = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Get value associated with key.
 * @ht: Hash table to get data from.
 * @key: Reference associated with the value.
 *
 * Return: The value associated with the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
	unsigned long int index;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table in order.
 * @ht: Hash table to print data from.
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	current_node = ht->shead;
	printf("{");
	while (current_node != NULL)
	{
		printf("'%s':'%s'", current_node->key, current_node->value);
		current_node = current_node->snext;
		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print sorted table in reverse.
 * @ht: Hash table to print from.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int printed = 0;

	if (ht == NULL)
		return;

	current_node = ht->stail;
	printf("{");
	while (current_node != NULL)
	{
		if (printed)
			printf(", ");
		printf("'%s':'%s'", current_node->key, current_node->value);
		current_node = current_node->sprev;
		printed = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes sorted table and its elements.
 * @ht: Hash table to delete.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *next_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];

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
