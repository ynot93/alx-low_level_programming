#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * followed by a new line to stdout
 * @s: Pointer to the string
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i != 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
