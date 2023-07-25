#include "main.h"

/**
 * puts_half - Prints half of a string
 * followed by a new line to stdout
 * @str: Pointer to the string
 *
 * Return: 0 (Success)
 */

void puts_half(char *str)
{
	int i = 0;
	int start;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		start = i / 2;
	}
	else
	{
		start = (i + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
