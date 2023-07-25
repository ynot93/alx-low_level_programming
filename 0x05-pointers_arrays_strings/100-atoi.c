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

	sign = 1;
	num = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	num *= sign;

	return (num);
}
