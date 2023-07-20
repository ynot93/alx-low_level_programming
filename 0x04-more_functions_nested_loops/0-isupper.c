/**
 * _isupper - Checks if a character is uppercase
 * @c: Character to be checked
 *
 * Description - This function checks whether the input character 'c' is an
 * uppercase letter or not.
 *
 * Return: 1 if 'c' is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
