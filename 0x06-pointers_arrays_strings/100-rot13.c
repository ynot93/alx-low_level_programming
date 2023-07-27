#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: Pointer to the encoded string
 */

char *rot13(char *str)
{
	char *ptr = str;
	char *rot13_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_replace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str)
	{
		char *rot13_ptr = rot13_letters;
		char *replacement_ptr = rot13_replace;
		int found = 0;

		while (*rot13_ptr && !found)
		{
			if (*str == *rot13_ptr)
			{
				*str = *replacement_ptr;
				found = 1;
			}
			rot13_ptr++;
			replacement_ptr++;
		}
		str++;
	}
	return (ptr);
}
