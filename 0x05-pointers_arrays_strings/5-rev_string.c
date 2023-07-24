#include "main.h"

/**
 * rev_string - Reverse string followed by a new line to stdout
 * @s: Pointer to the string
 *
 * Return: 0 (Success)
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	int start = 0;
	int end = i - 1;
	char j;

	while start < end
	{
		/* Swap characters at start and end positions */
		j = s[start];
		s[start] = s[end];
		s[end] = s[j];

		start++;
		end--;
	}
}
