#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list_t.
 * @h: Pointer to iterate through the node.
 *
 * Return: The number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
