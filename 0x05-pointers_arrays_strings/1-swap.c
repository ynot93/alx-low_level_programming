#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integr to be swapped
 * @b: Second integer to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
