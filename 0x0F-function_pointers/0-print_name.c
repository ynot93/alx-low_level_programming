#include "function_pointers.h"

/**
 * print_name - Using function pointers to print a name.
 * @name: The name to be printed.
 * @f: Function pointer.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
