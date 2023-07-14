#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * apart from letter q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch += 1;
	}
	putchar ('\n');

	return (0);
}
