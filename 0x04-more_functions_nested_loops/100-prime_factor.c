#include <stdio.h>

/**
 *is_prime - Checks if a number is prime
 * @num: The number to check
 *  Return: 1 if the number is prime, 0 otherwise
 */
int is_prime(unsigned long num)
{
	unsigned long i;

	if (num < 2)
	{
		return (0);
	}

	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * largest_prime_factor - Calculates the prime factorization of a number
 * @num: The number to be calculated on
 *
 * Return: The largest prime factor
 */
unsigned long largest_prime_factor(unsigned long num)
{
	unsigned long largest_factor = 1;
	unsigned long i, final_i = 0;

	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0 && is_prime(i))
		{
			largest_factor = i;
			while (num % i == 0)
			{
				num /= i;
			}
		}
		final_i = i;
	}
	if (num > i && is_prime(num))
	{
		largest_factor = num;
	}
	return (largest_factor);
}

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long result =  largest_prime_factor(number);

	printf("%lu\n", result);
	return (0);
}
