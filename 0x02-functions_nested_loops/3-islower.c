#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Description: This function checks whether a given character is lowercase.
 *              It returns 1 if the character is lowercase, and 0 otherwise.
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
