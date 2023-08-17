#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything according to the format provided.
 * @format: String containing arguments to be printed.
 *
 * Return: Prints (nil) if a string is null,
 *         Prints values based on the format string.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char *separator = "";
	va_list argmnts;

	va_start(argmnts, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(argmnts, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(argmnts, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argmnts, double));
				break;
			case 's':
				{
					str = va_arg(argmnts, char*);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
				}
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(argmnts);
	printf("\n");
}
