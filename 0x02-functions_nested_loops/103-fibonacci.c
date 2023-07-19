#include <stdio.h>
/**
 * main - Calculates the sum of even-valued Fibonacci terms
 *
 * Description: This program calculates the sum of the even-valued terms
 * in the Fibonacci sequence, where the values do not exceed 4,000,000.
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	unsigned long int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}

		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
