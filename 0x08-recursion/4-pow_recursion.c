#include "main.h"

/**
 * _pow_recursion - Calculate the value of x to the power of y
 * @x: The base whose power we want to calculate
 * @y: The exponent of the number x
 *
 * Return: -1 if y is lower than 0,
 *          1 if y is 0,
 *          value of x to the power of y if conditions are met
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	res = x * _pow_recursion(x, y - 1);
	return (res);
}
