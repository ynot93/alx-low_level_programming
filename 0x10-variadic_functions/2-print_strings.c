#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints input strings followed by a new line.
 * @separator: The string that is printed in between the input strings.
 * @n: The number of strings that are passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argmnts;
	unsigned int i;
	char *str;

	va_start(argmnts, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argmnts, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(argmnts);
	printf("\n");
}
