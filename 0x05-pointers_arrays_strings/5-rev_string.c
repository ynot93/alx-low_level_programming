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
	int start;
	int end;

	while (s[i] != '\0')
	{
		i++;
	}

	start = 0;
	end = i - 1;

	while (start < end)
	{
		char j;

		/* Swap characters at start and end positions */
		j = s[start];
		s[start] = s[end];
		s[end] = j;

		start++;
		end--;
	}
}
