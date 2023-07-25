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
	int overflow;

	sign = 1;
	num = 0;
	while (*s == ' ')
	{
		s++;
	}
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
		{
			overflow = 1;
			break;
		}

		num = num * 10 + (*s - '0');
		s++;
	}
	num *= sign;

	if (overflow)
		return (0);

	return (num);
}
