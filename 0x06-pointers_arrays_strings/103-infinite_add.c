#include "main.h"

/**
 * infinite_add - Adds two positive numbers represented as strings
 * @n1: Pointer to the first number string
 * @n2: Pointer to the second number string
 * @r: Pointer to the buffer that stores the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0, len_sum, carry = 0, sum;
	int i, j, k;
	char temp;

	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;

	if (len_n1 >= size_r || len_n2 >= size_r)
		return (0);

	i = len_n1 - 1, j = len_n2 - 1, k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		if (k < size_r - 1)
			r[k] = (sum % 10) + '0';
		else
			return (0);
		i--;
		j--;
		k++;
	}
	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}

