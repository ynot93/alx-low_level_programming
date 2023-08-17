#include "3-calc.h"

/**
 * get_op_func - Selects which function to perform the operation.
 * @s: The operator passed as an argument.
 *
 * Return: NULL if function not found,
 *         Pointer to the corresponding function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
