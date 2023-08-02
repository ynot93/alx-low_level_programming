#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the string being checked.
 *
 * Return: 1 if a string is a palindrome. 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0' || (*s + 1) == 0)
	{
		return (1);
	}

	if (*s == *(s + strlen(s) - 1))
	{
		*(s + strlen(s) - 1) = '\0';
		return (is_palindrome(s + 1));
	}
	return (0);
}
