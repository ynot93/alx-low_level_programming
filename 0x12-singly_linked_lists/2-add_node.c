#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of list list_t.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be duplicated.
 *
 * Return: NULL if it failed.
 *         Address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count;

	count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	while (*str != '\0')
	{
		count++;
		str++;
	}

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
