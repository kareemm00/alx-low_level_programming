#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: factorial number
 *
 * Return: If n is lower than 0  return -1
 * if equal to zero return 1 else return integer
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
