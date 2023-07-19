#include <stdio.h>
/**
 * main - Prints the sum of multiples of 3 or 5 below a given limit
 *
 * Description: This program calculates the sum of all the multiples of 3 or 5
 * below a specified limit (excluded) and prints the result.
 *
 * Return: 0 on successful completion
 *
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
