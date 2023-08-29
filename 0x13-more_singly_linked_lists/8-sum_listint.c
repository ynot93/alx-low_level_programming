#include "lists.h"
/**
 * sum_listint - Return the sum of n in the linked list listint_t.
 * @head: Pointer to traverse the linked list.
 *
 * Return: 0 if the list is empty,
 *         Sum of all the data in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum, n;

	sum = 0;

	while (head != NULL)
	{
		n = head->n;
		sum += n;
		head = head->next;
	}
	return (sum);
}
