#include "main.h"

/**
 * _puts_recursion - print string to stdout using recursion
 * @s: Pointer to string being printed
 *
 * Return: 0 (Success)
 */

void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
