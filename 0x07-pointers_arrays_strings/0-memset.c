#include "main.h"

/**
 * _memset - Fills memory block with a constant byte
 * @s: Pointer to the starting address of memory
 * @b: The value set to each byte in memory
 * @n: Number of bytes of memory block
 *
 * Return: Pointer to the memory block.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
