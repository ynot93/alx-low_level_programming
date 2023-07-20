#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Description: This program calculates the first 98 Fibonacci numbers
 * without using long long, pointers, arrays, structures, or hardcoding
 * any Fibonacci number (except for 1 and 2). The numbers are separated
 * by comma followed by a space, and printed on a single line.
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
