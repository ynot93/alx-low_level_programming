/**
 * _isdigit - Checks for a digit 0 through 9
 * @c: Digit to be checked
 *
 * Description: This function checks whether the input character 'c'
 * is a digit (0 through 9) or not
 *
 * Return: 1 if 'c' is a digit and 0 if otherwise
 */
int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
