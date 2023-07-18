#include "main.h"

/**
 * print_alphabet_x10 - Prints a-z ten times
 *
 * Description: Utilizes the _putchar function to print
 * the alphabet in lowercase ten times
*/
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
