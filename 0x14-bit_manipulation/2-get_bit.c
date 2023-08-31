#include "main.h"

/**
 * get_bit - Gets the value of a bit at the index given.
 * @n: The number whose bits we're finding the value of.
 * @index: The index of the bit to get.
 *
 * Return: -1 if an error occurred,
 *         Value of the bit at the index provided.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	n = n >> index;

	return (n & 1);
}
