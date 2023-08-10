#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates 2 strings using malloc.
 * @s1: Origiinal string.
 * @s2: String to be concatenated to original.
 * @n: Number of characters from s2 to add onto s1
 *
 * Return: NULL if allocation fails,
 *         Pointer to allocated memory if successful.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int len_s1, len_s2, i;

	len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	if (n > len_s2)
		n = len_s2;

	str_concat = malloc(len_s1 + n + 1);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		str_concat[i] = s1[i];

	for (i = 0; i < n; i++)
		str_concat[len_s1 + i] = s2[i];

	str_concat[len_s1 + n] = '\0';

	return (str_concat);
}
