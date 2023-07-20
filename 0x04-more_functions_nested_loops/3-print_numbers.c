#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Description: This function prints the numbers, from 0 to 9,
 * followed by a new line. It only uses _putchar twice in the code
 *
 * Return: Numberrs 0 to 9
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
