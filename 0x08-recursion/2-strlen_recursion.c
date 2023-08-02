#include "main.h"

/**
 * _strlen_recursion - Uses recursion to calculate length of string
 * @s: Pointer to the string whose length is calculated
 *
 * Return: Number of characters in the string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}

	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
