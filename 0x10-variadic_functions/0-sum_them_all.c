#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: n of arguments
 * @...: sums
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, k = n;
	va_list p;

	if (!n)
		return (0);
	va_start(p, n);
	while (k--)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
