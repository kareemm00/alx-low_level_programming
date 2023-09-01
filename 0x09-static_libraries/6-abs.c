#include "main.h"

/**
 *  _abs - A function that  computes the absolute value of an integer
 *
 * @n: checks the number
 *
 * Return: Returns n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= (-1);
	}
	return (n);
}
