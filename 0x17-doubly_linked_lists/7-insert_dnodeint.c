#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the pointer to the head.
 * @idx: Position to add the new node.
 * @n: Data to add to the new node.
 *
 * Return: NULL if it failed,
 *         Address of new node on success.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;
	
	new_node->n = n;
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}

	if (*h == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;
	
	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}
	return (new_node);
}
