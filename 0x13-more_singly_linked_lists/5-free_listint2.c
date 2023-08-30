#include "lists.h"
/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: Pointer to the head pointer of the linked list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
