#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian
 *         1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num;
	unsigned char *ptr;

	num = 1;
	ptr = (unsigned char *)&num;

	return (*ptr);
}
