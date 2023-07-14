#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');

	return (0);
}
