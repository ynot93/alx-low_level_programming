#include "lists.h"
/*
 * free_listint - Free memory for listint_t list.
 * @head: Pointer to list to be freed of memory.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
