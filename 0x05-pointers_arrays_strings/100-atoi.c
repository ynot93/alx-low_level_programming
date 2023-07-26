#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer, or 0
 */

int _atoi(char *s)
{
	int d = 0;
	int i = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[i] != '\0')
	{
		++len;
	}

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			f = 0;
		}
		i++
	}

	if (f == 0)
		return (0);

	return (n);
}
