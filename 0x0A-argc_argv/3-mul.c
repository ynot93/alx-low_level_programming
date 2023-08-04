#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two whole numbers.
 * @argc: Number of command line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If success, 0. If error 1.
 */

int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
