#include "main.h"

/**
 * wildcmp - Makes comparisons between 2 strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 1 if strings are identical, 0 if they're not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		while (*(s2 + 1 == '*'))
		{
			s2++;
		}
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 2));
	}
	return (0);
}
