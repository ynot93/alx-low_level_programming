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

	return (calc_sqrt(n, 1, n));
}

/**
 * calc_sqrt - Uses binary search to find squareroot.
 * @n: Number to calculate the squareroot.
 * @start: Start point of search
 * @end: End point of search
 *
 * Return: The value of square root of n,
 *         or -1 if no natural square root exists
 */

int calc_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int sqr = mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (sqr == n)
	{
		return (mid);
	}

	if (sqr > n)
	{
		return (calc_sqrt(n, start, end - 1));
	}
	else
	{
		return (calc_sqrt(n, mid + 1, end));
	}
}
