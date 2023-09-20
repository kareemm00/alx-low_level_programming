#include "3-calc.h"

/**
 * get_op_func - function that select the correct function to perform
 * the operation
 * @s: string.
 *
 * Return: pointer to the function
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
	int k = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[k].op[0] && !s[1])
			return (ops[k].f);
		k++;
	}
	return (NULL);
}

