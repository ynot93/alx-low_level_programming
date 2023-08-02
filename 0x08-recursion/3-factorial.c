#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: Number whose factorial is to be calculated
 *
 * Return: 1 if n is equal to 0,
 * -1 if n is less than 0 to indicate error,
 * otherwise return the factorial of the number
 */

int factorial(int n)
{
	int fac;

	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	fac = n * factorial(n - 1);
	return (fac);
}
