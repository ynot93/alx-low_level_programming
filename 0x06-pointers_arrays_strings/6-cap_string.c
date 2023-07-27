#include "main.h"

/**
 * cap_string - Capitalizes first letter of all words in
 * a string
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_flag = 1;

	while (*ptr != '\0')
	{
		if (capitalize_flag && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
		}
		capitalize_flag = 0;

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		    *ptr == ',' || *ptr == ';' || *ptr == '.' ||
		    *ptr == '!' || *ptr == '?' || *ptr == '"' ||
		    *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_flag = 1;
		}
		ptr++;
	}
	return (str);
}
