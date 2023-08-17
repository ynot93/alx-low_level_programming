#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Add all parameters of a variadic function.
 * @n: Number of arguments of variadic function.
 *
 * Return: 0 if n is equal to 0,
 *         sum of all the parameters of the function.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argmnts;
	int sum = 0;
	unsigned int i;
	int num;

	va_start(argmnts, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		num = va_arg(argmnts, int);
		sum += num;
	}
	va_end(argmnts);

	return (sum);
}
