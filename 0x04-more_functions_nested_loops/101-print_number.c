#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int num;
	int digit;
	int digits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	digits = 0;

	num = n;

	while (num != 0)
	{
		digits++;
		num /= 10;
	}

	while (digits > 0)
	{
		int divisor = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			divisor *= 10;
		}

		digit = n / divisor;

		_putchar(digit + '0');

		n %= divisor;
		digits--;
	}
}
