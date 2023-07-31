#include "main.h"

/**
 * _memcpy - Copies memory from source to destination
 * @dest: Pointer to where data will be copied
 * @src: Pointer from where data will be copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to destination memory location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_d = dest;
	char *ptr_s = source;

	while (n > 0)
	{
		*ptr_d = *ptr_s;
		ptr_d++;
		ptr_s++;
		n--;
	}
	return (dest)
}
