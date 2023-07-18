#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Description: This function checks whether a given character is alphabetic.
 *              It returns 1 if the character is a letter, lowercase or
 *              uppercase, and 0 otherwise.
 *
 * Return: 1 if @c is upper or lowercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
