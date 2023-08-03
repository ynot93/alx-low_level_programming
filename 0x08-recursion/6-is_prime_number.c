#include "main.h"

/**
 * divisible - Checks if a number is divisible by a divisor
 * @n: Input number to check for divisibility
 * @div: Divisor that divides input n
 *
 * Return: 1 if divisible, 0 if not
 */

int divisible(int n, int div)
{
	if (div == 1)
	{
		return (0);
	}

	if (div * div > n)
	{
		return (0);
	}

	if (n % div == 0)
	{
		return (1);
	}

	if (div * div == n)
	{
		return (1);
	}
	return (divisible(n, div + 1));
}

/**
 * is_prime_number - Determine if a number is a prime number
 * @n: Input number to be determined if it is a prime number
 *
 * Return: 0 if it is not and 1 if it is a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (!divisible(n, 2));
}
