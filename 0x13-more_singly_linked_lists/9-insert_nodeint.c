#include "lists.h"
/**
 * insert_nodeint_at_index - Insert new node at position of index.
 * @head: Pointer to the head pointer of linked list.
 * @idx: Index where new node should be added.
 * @n: Data to add to linked list.
 *
 * Return: NULL if the insertion failed,
 *         Address to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int count;

	count = 0;
	current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
