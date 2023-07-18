#include "main.h"

/**
 * main - Entry point
 *
 * Description - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * print_alphabet - Prints a-z
	 *
	 * Description: Utilizes the _putchar function to print
	 * the alphabet in lowercase
	 */
	void print_alphabet(void)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
	return (0);
}
