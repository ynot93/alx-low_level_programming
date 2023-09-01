#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at given index.
 * @n: Pointer to the number.
 * @index: The index of the bit to set.
 *
 * Return: -1 if an error occurred,
 *          1 if successful.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
