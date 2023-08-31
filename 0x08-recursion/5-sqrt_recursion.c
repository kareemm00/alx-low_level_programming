#include "main.h"

/**
 *_sqrt_recursion - a function that returns the natural square root ofanumber
 *
 * @n: int value
 * @s: square root
 *
 * Return: value
*/

int root(int n, int s);
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
/**
 * root - function of square root
 *
 * @n: square root number
 * @s: square root
 *
 * Return: square root
*/

int root(int n, int s)
{
	int square = s * s;

	if (square > n)
		return (-1);
	else if (square == n)
		return (s);
	else
		return (square(n, s + 1));
}
