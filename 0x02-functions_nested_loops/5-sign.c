#include "main.h"

/**
 *  print_sign - A function that prints the sign of a number
 *
 * @n: checks the number
 *
 * Return: Returns 1 if n is positive, Returns 0 if n is zero
 * return -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
