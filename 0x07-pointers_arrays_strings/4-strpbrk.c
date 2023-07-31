#include "main.h"

/**
 * _strpbrk - Searches a string for first occurence of byte
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string of bytes to search for
 *
 * Return: Pointer to the first occurrence of a matching byte in @s
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
