#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to move through the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
