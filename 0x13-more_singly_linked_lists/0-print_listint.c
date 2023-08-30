#include "lists.h"
/**
 * print_listint - Prints all the elements of a list listint_t.
 * @h: Pointer to traverse the linked list listint_t.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
