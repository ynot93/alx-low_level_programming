#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with specific rules
 *
 * Description: This program prints the numbers from 1 to 100. For multiples
 * of three, it prints "Fizz" instead of the number. For multiples of five,
 * it prints "Buzz" instead of the number. For numbers that are multiples of
 * both three and five, it prints "FizzBuzz". Each number or word is separated
 * by a space, and the list is followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
