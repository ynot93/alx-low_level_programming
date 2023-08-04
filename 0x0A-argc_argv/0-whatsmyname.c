#include <stdio.h>

/**
 * main - Prints it's name followed by a new line.
 * argc: Number of command line arguments
 * argv: An array of pointers to the arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
