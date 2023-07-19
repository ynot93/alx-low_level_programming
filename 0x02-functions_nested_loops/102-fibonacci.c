#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Description: This program calculates the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by comma and space.
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;
	int i;

	printf("%d, %d", a, b);

	for (i = 3; i < 50; i++)
	{
		next = a + b;
		printf(", %d", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
