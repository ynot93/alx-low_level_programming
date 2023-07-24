#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * followed by a new line to stdout
 * @str:  Pointer to the string
 *
 * Return: 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
