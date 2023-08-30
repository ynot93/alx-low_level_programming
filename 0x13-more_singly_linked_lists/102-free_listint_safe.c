#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: Number of nodes that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int count;
	listint_t *current, *next;

	count = 0;
	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;

		if (next >= current)
		{
			*h = NULL;
			return (count);
		}
		current = next;
	}
	*h = NULL;
	return (count);
}
