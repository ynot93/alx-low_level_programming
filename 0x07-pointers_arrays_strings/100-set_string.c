#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to a char where the address of pointer
 *     to be set is stored
 * @to: Pointer to a char, contins address to be set to s.
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
