#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for value in sorted list using
 *             Jump Search Algorithm.
 * @list: Pointer to the head of the list to search.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to first node where value is,
 *         or NULL if not present or list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev, i;
	listint_t *node, *end;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	prev = 0;
	node = list;

	while (node->n < value && node->next != NULL && node->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		prev = node->index;
		for (i = 0; i < jump && node->next != NULL && node->n < value; i++)
			node = node->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);
	end = node;

	printf("Value checked at index [%lu] = [%lu]\n", prev, prev);
	while (prev < size && prev <= end->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev, node->n);
		if (node->n == value)
			return (node);
		prev++;
		node = node->next;
	}
	return (NULL);
}

