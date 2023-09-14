#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 *
 * @separator: string
 * @n: n of arguments
 * @...: strings
 *
 * Return: void
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int k = n;
	char *ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (k--)
	{
		printf("%s%s", (ptr =  va_arg(p, char *)) ? ptr : "(nil)",
				k ? (separator ? separator : "") : "\n");
	}
	va_end(p);
}
