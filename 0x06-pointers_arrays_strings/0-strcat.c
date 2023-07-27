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
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
