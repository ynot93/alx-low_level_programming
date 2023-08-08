#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins required to make change.
 * @argc: Number of command line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If success, 0. If error 1.
 */

int main(int argc, char **argv)
{
	int cents, coin_num, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coin_num = 0;

	for (i = 0; i < 5; i++)
	{
		coin_num += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", coin_num);

	return (0);
}
