#include "lists.h"
/**
 * print_listint_safe - Prints a list with its nodes' addresses
 * @head: Pointer to traverse the list.
 *
 * Return: Exit(98) if the program fails,
 *         the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count;
	const listint_t *slow, *fast;

	count = 0;
	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	if (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	return (count);
}
