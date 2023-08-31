#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number whose bit we're setting to 1.
 * @index: The index of the bit to set to 1.
 *
 * Return: -1 if an error occurred,
 *          1 if successful.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
