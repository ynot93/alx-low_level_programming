#include "lists.h"
/**
 * get_nodeint_at_index - Gets the nth node in a linked list.
 * @head: Pointer to traverse the linked list.
 * @index: Index of the nth node.
 *
 * Return: NULL if the node does not exist,
 *         Pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
