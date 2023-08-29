#include "lists.h"
/**
 * reverse_listint - Reverses the order of a linked list.
 * @head: Pointer to head pointer of list.
 *
 * Return: Pointer of first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return(*head);
}
