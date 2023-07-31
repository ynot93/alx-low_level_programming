#include "main.h"

/**
 * _strchr - Locates first occurence of character in string
 * @s: Pointer to string to search the character of
 * @c: Character we're looking for
 *
 * Return: Pointer to first occurence of c in string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
