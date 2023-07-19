#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from n to 98.
 *		The numbers are separated by a comma and a space, and are
 *		printed in order.The first printed number should be the number
 *		passed to your function and the last printed number should be 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf ("98\n");
}
