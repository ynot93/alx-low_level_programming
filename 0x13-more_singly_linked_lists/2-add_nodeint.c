#include "lists.h"
/**
 * add_nodeint - Adds a node at the beginning of linked list.
 * @head: Pointer to the head pointer of the linked list.
 * @n: The value to be added to the node.
 *
 * Return: NULL if adding the node failed,
 *         Address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
