#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at the index.
 * @head: Pointer to the head pointer of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: -1 if deletion failed,
 *          1 if deletion succeeded.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current = *head;

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
