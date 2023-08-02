#include "main.h"

/**
 * _print_rev_recursion - print string to stdout in reverse
 * 			  using recursion
 * @s: Pointer to string being printed
 *
 * Return: 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
