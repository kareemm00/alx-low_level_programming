#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 *
 * @separator: string
 * @n: n of arguments
 * @...: integers
 *
 * Return: void
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int k = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (k--)
	{
		printf("%d%s", va_arg(p, int),
				k ? (separator ? separator : "") : "\n");
	}
	va_end(p);
}
