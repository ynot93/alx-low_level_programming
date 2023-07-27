#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: Pointer to modified string
 */

char *leet(char *str)
{
	char *leetspeak = "AEOTL";
	char *replacement = "43071";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetspeak[j] != '\0'; j++)
		{
			if (str[i] == leetspeak[j] || str[i] == leetspeak[j] + 32)
			{
				str[i] = replacement[j];
				break;
			}
		}
	}

	return (str);
}
