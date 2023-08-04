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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int prod = num1 * num2;

	printf("%d\n", prod)
	return (0);
}
