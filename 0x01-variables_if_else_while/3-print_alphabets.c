#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * and then in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch += 1;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch += 1;
	}
	putchar ('\n');

	return (0);
}
