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

	while (*head != NULL && count < idx - 1)
	{
		current = *head;
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
