#include "lists.h"

/**
 * free_list - Frees the memory of the linked list list_t.
 * @head: Pointer to traverse the linked list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
