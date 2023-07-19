#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Description: This function prints the last digit of a number and returns
 *              its value. It is gotten by getting its absolute value and
 *              computing the modulus of ten.
 * Return: The last digit of @n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);
	return (last_digit);
}
