#include "function_pointers.h"

/**
 * print_name - name print
 *
 * @name: string name
 * @f: function pointer
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
