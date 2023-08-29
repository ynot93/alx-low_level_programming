#include "lists.h"
/*
 * free_listint2 - Free memory for listint_t list and set head to NULL.
 * @head: Pointer to list to be freed of memory.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
