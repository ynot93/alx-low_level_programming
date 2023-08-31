#include "main.h"
/**
 * flip_bits - Counts number of bits to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	result = n ^ m;
	count = 0;

	while (result)
	{
		count += result & 1;
		result = result >> 1;
	}
	return (count);
}
