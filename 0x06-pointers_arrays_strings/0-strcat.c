#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the string to which the source is appended
 * @src: Pointer to the string being appended
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
