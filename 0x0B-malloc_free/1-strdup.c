#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Dupllicates a string.
 * @str: Input string to be duplicated.
 *
 * Return: NULL if str is NULL or memory allocation fails,
 *         or a pointer to the newly allocated duplicated string.
 */

char *_strdup(char *str)
{
	char *ptr;
	int l, i;

	l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{
		l++;
	}

	ptr = (char *)malloc(l + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= l; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
