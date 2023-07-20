#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Description: This function prints the numbers, from 0 to 9,
 * followed by a new line. It only uses _putchar twice in the code.
 * Does not print 2 and 4.
 *
 * Return: Numberrs 0 to 9
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
