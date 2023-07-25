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
	int sign;
	unsigned int num;
	int is_digits;

	sign = 1;
	num = 0;
	is_digits = 0;

	if (*s == '-')
		sign *= -1;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			is_digits = 1;
		}
		else if (is_digits)
		{
			break;
		}
		s++;
	}

	if (*s == ' ')
	{
		s++;
	}
	num *= sign;

	return (num);
}
