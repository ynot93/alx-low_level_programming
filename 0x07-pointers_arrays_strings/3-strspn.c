#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to string to be searched
 * @accept: Pointer to acceptable set of characters
 *
 * Return: Length of s which contains the acceptable characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}
		s++;

	}
	return (count);
}
