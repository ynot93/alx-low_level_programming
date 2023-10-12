#include "lists.h"

/**
 * add_dnodeint - Add new node at the beginning of a list.
 * @head: Pointer to the pointer to head of list.
 * @n: Data to add to new node.
 *
 * Return: NULL if adding new node failed,
 *         Address of new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = create_node(n);

	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
