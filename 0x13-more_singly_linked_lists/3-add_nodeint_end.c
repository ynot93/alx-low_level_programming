#include "lists.h"
/**
 * add_nodeint_end - Adds a node at the end of linked list.
 * @head: Pointer to the head pointer of the linked list.
 * @n: The value to be added to the node.
 *
 * Return: NULL if adding the node failed,
 *         Address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);

	}
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
