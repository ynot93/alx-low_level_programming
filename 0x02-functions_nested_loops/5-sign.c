#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Description: This function prints the sign of a given number. If the number
 *              is greater than zero, it returns 1 and prints '+'. If the
 *              number is zero, it returns 0 and prints '0'. If the number is
 *              less than zero, it returns -1 and prints '-'.
 *
 * Return: 1 if @c is upper or lowercase letter, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar('0');
		return (0);
	_putchar('-');
	return (-1);
}
