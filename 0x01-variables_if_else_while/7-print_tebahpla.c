#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
