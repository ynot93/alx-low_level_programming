#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer value
 *
 * Description: This function computes the absolute value of the given integer.
 *              If the integer is positive or zero, it returns the same value.
 *              If the integer is negative, return the negation of the value
 *              to make it positive.
 *
 * Return: The absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
