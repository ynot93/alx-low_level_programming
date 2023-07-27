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
	char *ptr = *dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
