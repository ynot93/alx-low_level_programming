#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints all numbers passed to the function.
 * @separator: The string that is printed in between numbers.
 * @n: The number of integers that are passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argmnts;
	unsigned int i;
	int num;

	va_start(argmnts, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(argmnts, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(argmnts);
	printf("\n");
}
