#include "main.h"
/**
 * binary_to_uint - Converts a number in binary form to unsigned int.
 * b: Pointer to a string of 0 and 1 chars.
 *
 * Return: 0 if b is NULL, or,
 *         One or more chars in string b is not 0 or 1,
 *	   Converted number if successful.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, len;
	int power;

	res = 0;
	power = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] == '1')
			res += power;

		power *= 2;
	}
	return (res);
}
