#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: The number for which to calculate the square root
 *
 * Return: The value of square root of n,
 *         or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (calc_sqrt(n, 2));
}

/**
 * calc_sqrt - Uses binary search to find squareroot.
 * @n: Number to calculate the squareroot.
 * @div: Divisor of n.
 *
 * Return: The value of square root of n,
 *         or -1 if no natural square root exists.
 */

int calc_sqrt(int n, int div)
{
	if (div % (n / div) == 0)
	{
		if (div * (n / div) == n)
		{
			return (div);
		}
		else
		{
			return (-1);
		}
	}
	return (calc_sqrt(n, div + 1));
}
