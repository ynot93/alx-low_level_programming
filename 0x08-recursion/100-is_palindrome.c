#include "main.h"

/**
 * len_str - Calculates the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */

int len_str(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + len_str(s + 1));
}

/**
 * is_palindrome_helper - Detects if a string is a palindrome.
 * @s: The string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the string being checked.
 *
 * Return: 1 if a string is a palindrome. 0 if not.
 */

int is_palindrome(char *s)
{
	int len = len_str(s);

	if (len <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, len - 1));
}
