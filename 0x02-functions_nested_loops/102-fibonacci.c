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
	int a = 1;
	int b = 2;
	int next;

	printf("%d, %d", a, b);

	for (int i = 3; i < 50; i++)
	{
		next = a + b;
		printf(", %d", next);
		a = b;
		b = next;
	}
	printf("\n")
	return (0);
}
