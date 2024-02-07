#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for value in sorted skip list.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node of the value,
 *         or NULL otherwise.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *express;

	if (list == NULL)
		return (NULL);

	express = list;
	while (express != NULL && express->express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			express->index, express->n);
		if (express->express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				express->index, express->express->index);
			break;
		}
		express = express->express;
	}
	if (express->express == NULL)
	{
		node = express;
		while (node->next != NULL)
			node = node->next;
	}
	else
	{
		node = express;
		express = express->express;
	}
	printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	while (node != express && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	if (node == express)
		return (NULL);

	return (node);
}
