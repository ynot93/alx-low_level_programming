#include "main.h"

/**
 * _strstr - Locate a substring within a string
 * @haystack: Pointer to string to search in
 * @needle: Pointer to substring being searched for
 *
 * Return: Pointer to the substring located or NULL
 * if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr_haystack;
	char *ptr_needle;

	while (*haystack != '\0')
	{
		ptr_haystack = haystack;
		ptr_needle = needle;

		while (*haystack && *ptr_needle && *haystack == *ptr_needle)
		{
			haystack++;
			ptr_needle++;
		}

		if (*ptr_needle == '\0')
		{
			return (ptr_haystack);
		}
		haystack++;
	}
	return (NULL);
}
