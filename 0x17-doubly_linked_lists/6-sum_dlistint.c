#include "lists.h"

/**
 * sum_dlistint - Gets sum of all data in a linked list.
 * @head: Pointer to the head of list.
 *
 * Return: The sum of allthe data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
