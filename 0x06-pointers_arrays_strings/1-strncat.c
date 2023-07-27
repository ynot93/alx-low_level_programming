#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the string to which the source is appended
 * @src: Pointer to the string being appended
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*_ptr != '\0')
	{
		_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
