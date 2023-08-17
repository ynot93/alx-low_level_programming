#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command line arguments(strings).
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
