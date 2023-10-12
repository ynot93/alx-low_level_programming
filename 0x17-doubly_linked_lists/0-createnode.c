#include "lists.h"

/**
 * create_node - Creates a node for a doubly linked list.
 * @data: data to be inserted in the list.
 *
 * Return: The created node.
 */
dlistint_t *create_node(int data)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}
	new_node->n = data;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}
