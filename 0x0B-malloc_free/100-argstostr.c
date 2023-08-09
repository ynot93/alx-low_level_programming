#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a function.
 * @ac: The count of the arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: NULL on failure,
 *         Pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int len, i, j;
	char *argmnt, *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		argmnt = av[i];
		while (*argmnt)
		{
			len++;
			argmnt++;
		}
		len++;
	}
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);

	j = 0;

	for (i = 0; i < ac; i++)
	{
		argmnt = av[i];
		while (*argmnt)
		{
			res[j++] = *argmnt;
			argmnt++;
		}
		res[j++] = '\n';
	}
	res[j] = '\0';
	return (res);
}
