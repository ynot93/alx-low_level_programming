#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * *: pointer to the string
 *
 * Return: Pointer to UPPERCASE string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
