#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list listint_t.
 * @head: Pointer to the head pointer of the linked list.
 *
 * Return: 0 if linked list is empty,
 *         the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);

	current = *head;
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
