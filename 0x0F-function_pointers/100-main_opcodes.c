#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the operation codes of it's own main function.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	int i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", *(ptr + i));
		if (i < number_of_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
