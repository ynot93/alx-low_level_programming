#include "main.h"
#include <stdlib.h>

/**
 * _str_concat - Concatenates a string onto another.
 * @s1: String to be concatenated to.
 * @s2: Srtring to concatenate to s1.
 *
 * Return: NULL if memory allocation fails,
 *         or a pointer to the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *ptr;

	l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}
	ptr = (char *)malloc(l1 + l2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j <= l2; j++)
	{
		ptr[i + j] = s2[j];
	}
	return (ptr);
}
