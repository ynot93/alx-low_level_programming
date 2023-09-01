#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number whosw binary we are printing.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
